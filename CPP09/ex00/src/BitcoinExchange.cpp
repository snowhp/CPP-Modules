// Created by tde-sous on 4/1/24.
#include "BitcoinExchange.hpp"

void BitcoinExchange::parseInputFile(const char *file) {
  std::ifstream fileStream(file, std::ifstream::in);
  std::string str;
  int i = 0;

  while (std::getline(fileStream, str)) {
    std::cout << str << std::endl;

    if (i == 0) {
      if (str != "date | value") {
        std::cout << "Line " << i + 1 << ": " << str << std::endl;
        throw wrongHeader();
      }
      i++;
      continue;
    }

    if (str.find(" | ") == std::string::npos) {
      std::cout << "Line " << i + 1 << ": " << str << std::endl;
      throw invalidFormat();
    }

    std::string datePart = str.substr(0, str.find(" | "));
    std::string amountPartStr = str.substr(str.find(" | ") + 3);

    struct tm tm = {};
    if (!strptime(datePart.c_str(), "%Y-%m-%d", &tm) || !isValidData(tm)) {
      std::cout << "Line " << i + 1 << ": " << str << std::endl;
      throw invalidDate();
    }

    if (!amountPartStr.empty()) {
      char *pEnd;
      long int a = std::strtol(&amountPartStr[0], &pEnd, 10);
      if (a < 0 || a > 1000) {
        std::cout << "Line " << i + 1 << ": " << str << std::endl;
        throw amountOutOfRange();
      }
    }

    std::cout << "\n\n";

    i++;
  }
  if (i == 0)
    throw nothingToRead();
}

bool BitcoinExchange::isValidData(const tm &date) {
  switch (date.tm_mon) {
  case 1:
    if ((date.tm_year % 4 == 0 && date.tm_year % 100 != 0) || (date.tm_year % 400 == 0)) {
      return date.tm_mday <= 29;
    } else {
      return date.tm_mday <= 28;
    }
  case 3: case 5: case 8: case 10:
    return date.tm_mday <= 30;
  default:
    return date.tm_mday <= 31;
  }
}

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const char *file) { parseInputFile(file); }

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) { (void)other; }

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other) {
  (void)other;
  return *this;
}

BitcoinExchange::~BitcoinExchange() {}

const char *BitcoinExchange::amountOutOfRange::what() const throw() {
  return "Amount is out of range. Use between 0 and 1000.";
}

const char *BitcoinExchange::invalidDate::what() const throw() {
  return "Date format is invalid.";
}

const char *BitcoinExchange::invalidFormat::what() const throw() {
  return "Invalid format missing \" | \".";
}

const char *BitcoinExchange::wrongHeader::what() const throw() {
  return "Wrong header on the file.";
}

const char *BitcoinExchange::nothingToRead::what() const throw() {
  return "Nothing to read on the file.";
}
