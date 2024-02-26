// Created by tde-sous on 26-02-2024.
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("", 145, 137) {
  std::cout << "[ShrubberyCreationForm] Default constructor called.";
  this->asciiTreeWriter("");
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
    : AForm(target, 145, 137) {
  std::cout << "[ShrubberyCreationForm] Default constructor called.";
  this->asciiTreeWriter(target);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
    : AForm(other.getName(), other.getSignGrade(), other.getExecGrade()) {
  std::cout << "[ShrubberyCreationForm] Copy constructor called.";
  this->asciiTreeWriter(other.getName());
}

ShrubberyCreationForm &
ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
    : AForm(other.getName(), other.getSignGrade(), other.getExecGrade()) {
  std::cout << "[ShrubberyCreationForm] Copy assignment operator called.";
  this->asciiTreeWriter(other.getName());
  return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
  std::cout << "[ShrubberyCreationForm] Destructor called.";
}

void ShrubberyCreationForm::asciiTreeWriter(const std::string &name) {
  std::string outputFileName = name + "_shrubbery";
  std::ofstream outputFile(outputFileName.c_str());
  outputFile << "   *\n";
  outputFile << "  /|\\\n";
  outputFile << " / | \\\n";
  outputFile << "/__|__\\\n";
  outputFile << "   |\n";
  outputFile.close();
}