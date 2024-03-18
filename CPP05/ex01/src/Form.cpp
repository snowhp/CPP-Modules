// Created by tde-sous on 13-02-2024.
#include "Form.hpp"

Form::Form(const std::string &name, const unsigned int signGrade,
           const unsigned int execGrade)
    : name_(name), signGrade_(signGrade), execGrade_(execGrade) {
  std::cout << "[Form] Constructor called." << std::endl;
  if (signGrade > 150 || execGrade > 150)
    throw GradeTooLowException();
  else if (signGrade < 1 || execGrade < 1)
    throw GradeTooHighException();
  this->isSigned_ = false;
}

Form::Form()
    : name_("Unamed Form"), isSigned_(false), signGrade_(150), execGrade_(150) {
  std::cout << "[Form] Default Constructor called." << std::endl;
}

Form::Form(const Form &other)
    : name_(other.name_), isSigned_(), signGrade_(other.getSignGrade()), execGrade_(other.getExecGrade()) {
  std::cout << "[Form] Copy Constructor called." << std::endl;
  this->isSigned_ = other.isSigned_;
}

Form &Form::operator=(const Form &other) {
  std::cout << "[Form] Copy assignment operator called." << std::endl;
  if (this == &other)
    return (*this);
  this->isSigned_ = other.isSigned_;

  return *this;
}

Form::~Form() { std::cout << "[Form] Destructor called." << std::endl; }

std::string Form::getName() const { return (this->name_); }

bool Form::getSigned() const { return (this->isSigned_); }

unsigned int Form::getExecGrade() const { return (this->execGrade_); }

unsigned int Form::getSignGrade() const { return (this->signGrade_); }

void Form::beSigned(Bureaucrat &signer) {
  if (this->getSigned())
    signer.signForm(this, "Form was already signed");
  else if (this->getSignGrade() < signer.getGrade()) {
    signer.signForm(this, "grade is too low");
    throw Form::GradeTooLowException();
  } else {
    signer.signForm(this, "");
    this->isSigned_ = true;
  }
}

const char *Form::GradeTooHighException::what() const throw() {
  return ("[Form][Exception] Grade is too High!");
}

const char *Form::GradeTooLowException::what() const throw() {
  return ("[Form][Exception] Grade is too Low!");
}

std::ostream &operator<<(std::ostream &os, const Form &obj) {
  os << "This form is named: " << obj.getName() << ", and its "
     << (obj.getSigned() ? "signed " : "not signed ")
     << "the required grade to sign it, is " << obj.getSignGrade()
     << " and the required grade to execute it, is " << obj.getExecGrade();
  return os;
}
