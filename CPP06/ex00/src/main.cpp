// Created by tde-sous on 28-02-2024.

#include "ScalarConverter.hpp"

int main(int argc, char **argv) {
  if (argc != 2)
    return(std::cout << "Only send 1 argument!" << std::endl, 1);
  ScalarConverter::convert(argv[1]);
  return (0);
}