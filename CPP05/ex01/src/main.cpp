// Created by tde-sous on 07-02-2024.

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
  // Expected behavior
  try {
    Bureaucrat BurA("other", 124);
    Form FormA("Formâge A", 124,  123);
    std::cout << FormA << std::endl;
    FormA.beSigned(BurA);
    std::cout << FormA << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << "============" << std::endl;

  // Wrong Grade of FormA
  try {
    Form FormA("Formâge A", 151,  123);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << "============" << std::endl;

}