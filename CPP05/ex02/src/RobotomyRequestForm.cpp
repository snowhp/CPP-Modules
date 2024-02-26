// Created by tde-sous on 26-02-2024.
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("", 72, 45) {
  std::cout << "[RobotomyRequestForm] Default constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other.getName(), 72, 45) {
  std::cout << "[RobotomyRequestForm] Copy constructor constructor called." << std::endl;
}

RobotomyRequestForm &
RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
  (void) other;
  std::cout << "[RobotomyRequestForm] Copy assignment operator constructor called." << std::endl;
  return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
  std::cout << "[RobotomyRequestForm] Destructor called." << std::endl;
}
