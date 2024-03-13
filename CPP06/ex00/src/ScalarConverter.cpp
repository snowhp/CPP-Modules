// Created by tde-sous on 28-02-2024.
#include "ScalarConverter.hpp"

bool ScalarConverter::isChar(const std::string &representation) {
  return (representation.size() == 1 && std::isprint(representation[0]) &&
          !std::isdigit(representation[0]));
}

bool ScalarConverter::isInteger(const std::string &representation) {
  const size_t signal = representation.find('-');
  if (signal != 0 && signal != 1 && signal != std::string::npos)
    return (false);
  if (representation.find_first_not_of(
          DIGITS, signal == std::string::npos ? 0 : 1) != std::string::npos)
    return (false);
  return (true);
}

void ScalarConverter::convert(const std::string &representation) {
  if (isChar(representation))
    std::cout << "Is a char." << std::endl;
  else if (isInteger(representation))
    std::cout << "Is a interger." << std::endl;
}
