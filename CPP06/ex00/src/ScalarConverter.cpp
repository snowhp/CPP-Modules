// Created by tde-sous on 28-02-2024.
#include "ScalarConverter.hpp"

bool ScalarConverter::isChar(const std::string &representation) {
  return (representation.size() == 1 &&
          std::isprint(representation[0]) && !std::isdigit(representation[0]));
}

void ScalarConverter::convert(const std::string &representation) {
  if (isChar(representation))
    std::cout << "Is a char" << std::endl;
}
