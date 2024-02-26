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

  // Correct grade and sign
  try {
    Bureaucrat BurA("Bureaucrat A", 124);
    Form FormB("Formâge B", 150,  123);
    FormB.beSigned(BurA);
    std::cout << FormB << std::endl;
    BurA.signForm(&FormB, "");
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << "============" << std::endl;

}