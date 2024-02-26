// Created by tde-sous on 26-02-2024.
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
    : AForm("", 145, 137), target_("") {
  std::cout << "[ShrubberyCreationForm] Default constructor called."
            << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
    : AForm(target, 145, 137), target_(target) {
  std::cout << "[ShrubberyCreationForm] Constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
    : AForm(other.getName(), other.getSignGrade(), other.getExecGrade()),
      target_(other.target_) {
  std::cout << "[ShrubberyCreationForm] Copy constructor called." << std::endl;
  this->setSigned(other.getSigned());
}

ShrubberyCreationForm &
ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
  std::cout << "[ShrubberyCreationForm] Copy assignment operator called."
            << std::endl;
  if (this == &other)
    return *this;
  this->target_ = other.target_;
  this->setSigned(other.getSigned());
  return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
  std::cout << "[ShrubberyCreationForm] Destructor called." << std::endl;
}

void ShrubberyCreationForm::execute() const {
  std::ofstream outputFile((this->target_ + "_shrubbery").c_str());
  outputFile << "   *\n";
  outputFile << "  /|\\\n";
  outputFile << " / | \\\n";
  outputFile << "/__|__\\\n";
  outputFile << "   |\n";
  outputFile.close();
}