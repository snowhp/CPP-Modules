// Created by tde-sous on 07-02-2024.
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name_("Unamed Bureaucrat"), grade_(150) {
  std::cout << "[Bureaucrat] Default constructor called." << std::endl;
}

Bureaucrat::Bureaucrat(std::string const &name, int const &grade)
    : name_(name) {
  std::cout << "[Bureaucrat] Constructor called." << std::endl;
  if (grade < MAX_GRADE)
    throw Bureaucrat::GradeTooHighException();
  if (grade > MIN_GRADE)
    throw Bureaucrat::GradeTooLowException();
  this->grade_ = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name_(other.name_), grade_() {
  std::cout << "[Bureaucrat] Copy constructor called." << std::endl;
  *this = other;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
  std::cout << "[Bureaucrat] Copy assignment called." << std::endl;
  if (this == &other)
    return *this;
  this->grade_ = other.grade_;
  return *this;
}

Bureaucrat::~Bureaucrat() {
  std::cout << "[Bureaucrat] Destructor called." << std::endl;
}

void Bureaucrat::decrementGrade() {
  if (this->grade_ + 1 > MIN_GRADE)
    throw GradeTooLowException();
  this->grade_++;
}

void Bureaucrat::incrementGrade() {
  if (this->grade_ - 1 < MAX_GRADE)
    throw GradeTooHighException();
  this->grade_--;
}

unsigned int Bureaucrat::getGrade() const { return this->grade_; }

std::string Bureaucrat::getName() const { return this->name_; }

const char *Bureaucrat::GradeTooHighException::what() const throw() {
  return ("Grade is too High!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
  return ("Grade is too Low!");
}

void Bureaucrat::signForm(const Form *signedForm, const std::string &reason) {
  if (reason.empty())
    std::cout << this->getName() << " signed " << signedForm->getName()
              << std::endl;
  else
    std::cout << this->getName() << " couldn’t sign " << signedForm->getName()
              << " because " << reason << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj) {
  os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << "."
     << std::endl;
  return os;
}