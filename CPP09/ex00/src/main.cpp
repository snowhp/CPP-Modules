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
  std::cout << "File is opened!" << std::endl;
  try {
    BitcoinExchange wallet(argv[1]);
  }
  catch (std::exception &e)
  {
    std::cout << e.what() << std::endl;
  }
  inputFile.close();
}