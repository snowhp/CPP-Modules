//
// Created by tde-sous on 4/8/24.
//

#include "RPN.hpp"

#include <iostream>
#include <exception>

int main(int argc, char **argv) {
  std::string input;

  if (argc != 2)
    return (std::cout << "Usage: ./RPN \"8 9 * 9 - 9 - 9 - 4 - 1 +\"" << std::endl, 1);

  input = argv[1];
  if (input.find_first_not_of("0123456789+-*/ ") != std::string::npos)
    return (std::cout << "Error: Only numbers, operators, space are accepted." << std::endl, 1);

  try {
    RPN obj1(argv[1]);
  }
  catch (const std::exception &e)
  {
    std::cout << e.what() << std::endl;
  }
}