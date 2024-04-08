//
// Created by tde-sous on 4/8/24.
//

#include "PmergeMe.hpp"

int main(int argc, char **argv) {

  if (argc == 1)
    return (std::cout << "Please provide numbers to be sorted." << std::endl,
            1);

  std::vector<int> list;
  for (int i = 1; i < argc; i++) {
    std::string a = argv[i];
    if (a.find_first_not_of("0123456789") != std::string::npos) {
      std::cout << "Error: Invalid number provided " << argv[i] << std::endl;
      return 1;
    }
    long double num = std::strtol(argv[i], NULL, 10);
    if (num == 0 || num > std::numeric_limits<int>::max()) {
      std::cout << "Error: Invalid number provided " << argv[i] << std::endl;
      return 1;
    }

    list.push_back(static_cast<int>(num));
  }

  try {

    PmergeMe obj(list);
  } catch (const std::exception &e) {
    std::cout << e.what() << std::endl;
  }
}