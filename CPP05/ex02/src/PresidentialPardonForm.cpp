// Created by tde-sous on 26-02-2024.
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
    : AForm("", 25, 5), target_("") {
  std::cout << "[PresidentialPardonForm] Default constructor called."
            << std::endl;
  this->pardoned();
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
    : AForm(target, 25, 5), target_(target) {
  std::cout << "[PresidentialPardonForm] Constructor called." << std::endl;
  this->pardoned();
}
PresidentialPardonForm::PresidentialPardonForm(
    const PresidentialPardonForm &other)
    : AForm(other.target_, 25, 5), target_(other.target_) {
  std::cout << "[PresidentialPardonForm] Copy constructor called." << std::endl;
  this->setSigned(other.getSigned());
  this->pardoned();
}

PresidentialPardonForm &
PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
  std::cout << "[PresidentialPardonForm] Copy assigment operator called."
            << std::endl;
  if (this == &other) {
    this->pardoned();
    return *this;
  }
  this->setSigned(other.getSigned());
  this->target_ = other.target_;
  this->pardoned();
  return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
  std::cout << "[PresidentialPardonForm] Destructor called." << std::endl;
}

void PresidentialPardonForm::pardoned() {
  std::cout << "Informs that " << this->target_
            << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
