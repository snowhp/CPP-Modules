// Created by tde-sous on 4/1/24.
#include "BitcoinExchange.hpp"

void BitcoinExchange::parseInputFile(const char *file) {
  std::ifstream fileStream(file, std::ifstream::in);
  std::string str;
  int i = 0;
  struct tm tm = {};

  while (std::getline(fileStream, str))
  {
    std::cout << str << std::endl;
    if (i == 0) {
      if (str != "date | value") {
        std::cout << "Line " << i + 1 << ": " << str << std::endl;
        throw wrongHeader();
      }
    }

    if (str.find(" | ") == std::string::npos)
    {
      std::cout << "Line " << i + 1 << ": " << str << std::endl;
      std::cout << "Invalid format missing \" | \" " << std::endl; //convert to exception
    }
    std::string datePart = str.substr(0, str.find(" | "));
    std::string amountPart = str.substr(str.find(" | "));
    if (!strptime(datePart.c_str(), "%Y-%m-%d", &tm)) {
      std::cout << "Invalid" << std::endl;
    } else {
      std::cout << "Valid" << std::endl;
    }

    i++;
  }
  if (i == 0)
    throw nothingToRead();
}

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const char *file) {
    parseInputFile(file);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) {
    (void) other;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other) {
  (void) other;
  return *this;
}

BitcoinExchange::~BitcoinExchange() {}

const char *BitcoinExchange::wrongHeader::what() const throw() {
  return "Wrong header on the file.";
}

const char *BitcoinExchange::nothingToRead::what() const throw() {
  return "Nothing to read on the file.";
}
