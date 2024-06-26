//
// Created by tde-sous on 4/1/24.
//

#include "BitcoinExchange.hpp"

#include <iostream>
#include <fstream>
#include "BitcoinExchange.hpp"

int main(int argc, char **argv) {
  if (argc != 2)
    return (std::cout << "Usage: ./btc input.txt" << std::endl, 0);
  std::ifstream inputFile(argv[1]);
  if (!inputFile.is_open())
    return (std::cout << "Couldn't open the file " << argv[1] << std::endl, 0);
  if (inputFile.peek() == std::ifstream::traits_type::eof())
    return (std::cout << "No content on the file " << argv[1] << std::endl, 0);
  BitcoinExchange wallet(argv[1]);
  inputFile.close();
}
