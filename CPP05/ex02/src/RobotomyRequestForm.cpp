// Created by tde-sous on 26-02-2024.
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("", 72, 45) {
  std::cout << "[RobotomyRequestForm] Default constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
    : AForm(target, 72, 45) {}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
    : AForm(other.getName(), 72, 45) {
  std::cout << "[RobotomyRequestForm] Copy constructor constructor called."
            << std::endl;
  this->setSigned(other.getSigned());
}

RobotomyRequestForm &
RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
  std::cout
      << "[RobotomyRequestForm] Copy assignment operator constructor called."
      << std::endl;
  this->setSigned(other.getSigned());
  return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
  std::cout << "[RobotomyRequestForm] Destructor called." << std::endl;
}
