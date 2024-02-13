// Created by tde-sous on 07-02-2024.

#include "Bureaucrat.hpp"

int main() {
  // Initiate with a wrong grade
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
    Bureaucrat BurC("other", 1);
    BurC.decrementGrade();
    BurC.incrementGrade();
    BurC.incrementGrade();
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << "============" << std::endl;

  // Working Bureautcrat
  try {
    Bureaucrat BurD("Mister BurBur", 1);
    std::cout << BurD << std::endl;
    BurD.decrementGrade();
    std::cout << BurD << std::endl;
    BurD.decrementGrade();
    std::cout << BurD << std::endl;
    BurD.incrementGrade();
    std::cout << BurD << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
}