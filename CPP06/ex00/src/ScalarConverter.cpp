// Created by tde-sous on 28-02-2024.
#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other) {
  if (this == &other)
    return (*this);
  return (*this);
}

ScalarConverter::~ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &other) {
  *this = other;
}

bool ScalarConverter::isChar(const std::string &representation) {
  return (representation.size() == 1 && std::isprint(representation[0]) &&
          !std::isdigit(representation[0]));
}

bool ScalarConverter::isInteger(const std::string &representation) {
  const size_t signal = representation.find('-');

  if (signal != 0 && signal != std::string::npos)
    return (false);
  if (representation.find_first_not_of(
          DIGITS, signal == std::string::npos ? 0 : 1) != std::string::npos)
    return (false);
  return (true);
}

bool ScalarConverter::isFloat(const std::string &representation) {
  if (representation == "-inff" || representation == "+inff" ||
      representation == "nanf")
    return (true);

  const size_t signal = representation.find('-');
  if (signal != 0 && signal != std::string::npos)
    return (false);

  const size_t dot = representation.find('.');
  if (dot == std::string::npos)
    return (false);

  if (representation[representation.size() - 1] != 'f')
    return (false);

  const size_t index = signal == 0 ? 1 : 0;

  const std::string decimalPart = representation.substr(index, dot - index);
  const std::string fractionalPart =
      representation.substr(dot + 1, representation.size() - (dot + 2));

  if (decimalPart.find_first_not_of(DIGITS) != std::string::npos ||
      fractionalPart.find_first_not_of(DIGITS) != std::string::npos)
    return (false);

  return (!decimalPart.empty() && !fractionalPart.empty());
}

bool ScalarConverter::isDouble(const std::string &representation) {
  if (representation == "-inf" || representation == "+inf" ||
      representation == "nan")
    return (true);

  const size_t signal = representation.find('-');
  if (signal != 0 && signal != std::string::npos)
    return (false);

  const size_t dot = representation.find('.');
  if (dot == std::string::npos)
    return (false);

  const size_t index = signal == 0 ? 1 : 0;

  const std::string decimalPart = representation.substr(index, dot - index);
  const std::string fractionalPart =
      representation.substr(dot + 1, representation.size() - (dot + 1));

  if (decimalPart.find_first_not_of(DIGITS) != std::string::npos ||
      fractionalPart.find_first_not_of(DIGITS) != std::string::npos)
    return (false);

  return (!decimalPart.empty() && !fractionalPart.empty());
}

void ScalarConverter::convertToNumber(const std::string &representation,
                                      long double number) {
  if (representation == "-inff" || representation == "+inff" ||
      representation == "nanf" || representation == "-inf" ||
      representation == "+inf" || representation == "nan") {
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;

    if (representation.find("nan") != std::string::npos) {
      std::cout << "float: nanf" << std::endl;
      std::cout << "double: nan" << std::endl;
    } else {
      std::cout << "float: " << representation[0] << "inff" << std::endl;
      std::cout << "double: " << representation[0] << "inf" << std::endl;
    }
    return;
  }

  if (number < std::numeric_limits<char>::min() ||
      number > std::numeric_limits<char>::max())
    std::cout << "char: overflows" << std::endl;
  else
    convertToChar(static_cast<char>(number));

  if (number < std::numeric_limits<int>::min() ||
      number > std::numeric_limits<int>::max())
    std::cout << "int: overflows" << std::endl;
  else if (isChar(representation))
        std::cout << "int: " << static_cast<int>(representation[0]) << std::endl;
  else
    std::cout << "int: " << std::atoi(representation.c_str()) << std::endl;

  if (number < -std::numeric_limits<float>::max() ||
      number > std::numeric_limits<float>::max())
    std::cout << "float: overflows" << std::endl;
  else if (isChar(representation))
        std::cout << "float: " << static_cast<float>(representation[0]) << "f"
                  << std::endl;
  else
    std::cout << "float: " << std::strtof(representation.c_str(), NULL) << "f"
              << std::endl;

  if (number < -std::numeric_limits<double>::max() ||
      number > std::numeric_limits<double>::max())
    std::cout << "double: overflows" << std::endl;
  else if(isChar(representation))
        std::cout << "double: " << static_cast<double>(representation[0]) << std::endl;
  else
    std::cout << "double: " << std::strtod(representation.c_str(), NULL)
              << std::endl;
}

void ScalarConverter::convertToChar(const char &c) {
  if (std::isprint(c)) {
    std::cout << "char: "
              << "'" << c << "'" << std::endl;
  } else
    std::cout << "char: "
              << "Non displayable" << std::endl;
}

void ScalarConverter::convert(const std::string &representation) {
  if (isChar(representation)) {
    convertToNumber(representation,
                    static_cast<long double>(representation[0]));
    std::cout << "Is a char." << std::endl;
  } else if (isInteger(representation)) {
    convertToNumber(representation, std::strtold(representation.c_str(), NULL));
    std::cout << "Is a integer." << std::endl;
  } else if (isFloat(representation)) {
    convertToNumber(representation, std::strtold(representation.c_str(), NULL));
    std::cout << "Is a float." << std::endl;
  } else if (isDouble(representation)) {
    convertToNumber(representation, std::strtold(representation.c_str(), NULL));
    std::cout << "Is a double." << std::endl;
  } else
    std::cout << "Unknown type" << std::endl;
}
