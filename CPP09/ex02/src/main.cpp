//
// Created by tde-sous on 4/8/24.
//

#include "PmergeMe.hpp"

int main(int argc, char **argv) {

  if (argc == 1)
    return (std::cout << "Please provide numbers to be sorted." << std::endl, 1);
  for (int i = 1; i < argc; i++) {
    std::string a = argv[i];
    if (a.find_first_not_of("0123456789") != std::string::npos)
      return (std::cout << "Error: Invalid number provided " << argv[i]
                        << std::endl,
              1);
    long double num = std::strtol(argv[i], NULL, 10);
    if (num == 0 || num > std::numeric_limits<int>::max())
      return (std::cout << "Error: Invalid number provided " << argv[i]
                        << std::endl,
              1);
  }
}