// Created by tde-sous on 26-02-2024.
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("", 72, 45), target_("") {
  std::cout << "[RobotomyRequestForm] Default constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
    : AForm(target, 72, 45), target_(target) {
  std::cout << "[RobotomyRequestForm] Constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
    : AForm(other.target_, 72, 45) {
  std::cout << "[RobotomyRequestForm] Copy constructor constructor called."
            << std::endl;
  this->setSigned(other.getSigned());
  this->target_ = other.target_;
}

RobotomyRequestForm &
RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
  std::cout
      << "[RobotomyRequestForm] Copy assignment operator constructor called."
      << std::endl;
  if (this == &other)
    return *this;
  this->setSigned(other.getSigned());
  this->target_ = other.target_;
  return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
  std::cout << "[RobotomyRequestForm] Destructor called." << std::endl;
}
