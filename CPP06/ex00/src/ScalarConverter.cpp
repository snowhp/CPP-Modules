// Created by tde-sous on 28-02-2024.
#include "ScalarConverter.hpp"

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

void ScalarConverter::convert(const std::string &representation) {
  if (isChar(representation))
    std::cout << "Is a char." << std::endl;
  else if (isInteger(representation))
    std::cout << "Is a integer." << std::endl;
  else if (isFloat(representation))
    std::cout << "Is a float." << std::endl;
  else
    std::cout << "Unknown type" << std::endl;
}
