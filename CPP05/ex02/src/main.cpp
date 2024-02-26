// Created by tde-sous on 07-02-2024.

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main() {
  // Expected behavior
  try {
    Bureaucrat BurA("other", 146); // Grade to High for ShrubberyCreationForm
    ShrubberyCreationForm FormA("Formâge A");
    std::cout << FormA << std::endl;
    FormA.beSigned(BurA);
    std::cout << FormA << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << "============" << std::endl;
  try {
    Bureaucrat BurA("other", 72); // Grade to High for ShrubberyCreationForm
    RobotomyRequestForm FormA("hellooo");
    std::cout << FormA << std::endl;
    FormA.beSigned(BurA);
    std::cout << FormA << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << "============" << std::endl;
}