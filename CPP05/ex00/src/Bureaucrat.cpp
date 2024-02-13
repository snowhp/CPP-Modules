// Created by tde-sous on 07-02-2024.
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name_("unamed Bureaucrat"), grade_(150) {}

Bureaucrat::Bureaucrat(std::string const &name, int const &grade)
    : name_(name) {
  if (grade < MAX_GRADE)
    throw Bureaucrat::GradeTooHighException();
  if (grade > MIN_GRADE)
    throw Bureaucrat::GradeTooLowException();
  this->grade_ = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) { (void)other; }

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
  (void)other;
  return *this;
}

Bureaucrat::~Bureaucrat() {}

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

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj) {
  os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << "."
     << std::endl;
  return os;
}