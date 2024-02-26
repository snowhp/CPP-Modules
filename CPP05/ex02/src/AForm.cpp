// Created by tde-sous on 13-02-2024.
#include "AForm.hpp"

AForm::AForm(const std::string &name, const unsigned int signGrade,
           const unsigned int execGrade)
    : name_(name) {
  std::cout << "[AForm] Constructor called." << std::endl;
  if (signGrade > 150 || execGrade > 150)
    throw GradeTooLowException();
  else if (signGrade < 1 || execGrade < 1)
    throw GradeTooHighException();
  this->isSigned_ = false;
  this->signGrade_ = signGrade;
  this->execGrade_ = execGrade;
}

AForm::AForm()
    : name_("Unamed Form"), isSigned_(false), signGrade_(150), execGrade_(150) {
  std::cout << "[AForm] Default Constructor called." << std::endl;
}

AForm::AForm(const AForm &other)
    : name_(other.name_), isSigned_(), signGrade_(), execGrade_() {
  std::cout << "[AForm] Copy Constructor called." << std::endl;
  *this = other;
}

AForm &AForm::operator=(const AForm &other) {
  std::cout << "[AForm] Copy assignment operator called." << std::endl;
  if (this == &other)
    return (*this);
  this->isSigned_ = other.isSigned_;
  this->signGrade_ = other.signGrade_;
  this->execGrade_ = other.execGrade_;
  return *this;
}

AForm::~AForm() { std::cout << "[Form] Destructor called." << std::endl; }

std::string AForm::getName() const { return (this->name_); }

bool AForm::getSigned() const { return (this->isSigned_); }

unsigned int AForm::getExecGrade() const { return (this->execGrade_); }

unsigned int AForm::getSignGrade() const { return (this->signGrade_); }

void AForm::beSigned(Bureaucrat &signer) {
  if (this->getSigned())
    signer.signForm(this, "Form was already signed");
  else if (this->getSignGrade() < signer.getGrade()) {
    signer.signForm(this, "grade is too low");
    throw AForm::GradeTooLowException();
  } else {
    signer.signForm(this, "");
    this->isSigned_ = true;
  }
}

const char *AForm::GradeTooHighException::what() const throw() {
  return ("[Form][Exception] Grade is too High!");
}

const char *AForm::GradeTooLowException::what() const throw() {
  return ("[Form][Exception] Grade is too Low!");
}

std::ostream &operator<<(std::ostream &os, const AForm &obj) {
  os << "This form is named: " << obj.getName() << ", and its "
     << (obj.getSigned() ? "signed " : "not signed ")
     << "the required grade to sign it, is " << obj.getSignGrade()
     << " and the required grade to execute it, is " << obj.getExecGrade();
  return os;
}