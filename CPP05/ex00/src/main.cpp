// Created by tde-sous on 07-02-2024.

#include "Bureaucrat.hpp"

int main() {
  //Initiate with a wrong grade
  try {
    Bureaucrat BurA("other", 151);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << "============" << std::endl;
  // Initiate with a correct grade and perform wrong decrement
  try {
    Bureaucrat BurB("other", 150);
    BurB.decrementGrade();
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << "============" << std::endl;
  // Initiate with a correct grade and perform wrong increment
  try {
    Bureaucrat BurB("other", 1);
    BurB.decrementGrade();
    BurB.incrementGrade();
    BurB.incrementGrade();
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
}