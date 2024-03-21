//
// Created by tde-sous on 3/20/24.
//

#include "easyfind.hpp"

int main() {
  try {
    srand(time(NULL));

    std::vector<int> vectorToCheck;
    for (int i = 0; i < 5; i++) {
      int randNum = rand() % 5;
      std::cout << "Added to the vector[" << i << "] > " << randNum
                << std::endl;
      vectorToCheck.push_back(randNum);
    }
    int randNumToBeFound = rand() % 7;
    std::cout << "Trying to find in the vector value >> " << randNumToBeFound
              << std::endl;
    easyfind(vectorToCheck, randNumToBeFound);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
}