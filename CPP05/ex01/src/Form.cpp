// Created by tde-sous on 13-02-2024.
#include "Form.hpp"

Form::Form(const std::string &name, const unsigned int signGrade,
           const unsigned int execGrade)
    : name_(name) {
  std::cout << "[Form] Constructor called." << std::endl;
  if (signGrade > 150 || execGrade > 150)
    throw GradeTooLowException();
  else if (signGrade < 1 || execGrade < 1)
    throw GradeTooHighException();
  this->isSigned_ = false;
  this->signGrade_ = signGrade;
  this->execGrade_ = execGrade;
}

Form::Form()
    : name_("Unamed Form"), isSigned_(false), signGrade_(150), execGrade_(150) {
  std::cout << "[Form] Default Constructor called." << std::endl;
}

Form::Form(const Form &other)
    : name_(other.name_), isSigned_(), signGrade_(), execGrade_() {
  std::cout << "[Form] Copy Constructor called." << std::endl;
  *this = other;
}

Form &Form::operator=(const Form &other) {
  std::cout << "[Form] Copy assignment operator called." << std::endl;
  if (this == &other)
    return (*this);
  this->isSigned_ = other.isSigned_;
  this->signGrade_ = other.signGrade_;
  this->execGrade_ = other.execGrade_;
  return *this;
}

Form::~Form() { std::cout << "[Form] Destructor called." << std::endl; }

const char *Form::GradeTooHighException::what() const throw() {
  return ("[Form] Grade is too High!");
}

const char *Form::GradeTooLowException::what() const throw() {
  return ("[Form] Grade is too Low!");
}