// Created by tde-sous on 07-02-2024.
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string const &name, int const &grade)
    : name_(name) {
  if (grade < 1)
    throw Bureaucrat::GradeTooLowException();
  if (grade > 150)
    throw Bureaucrat::GradeTooHighException();
  this->grade_ = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) { (void)other; }

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
  (void)other;
  return *this;
}

Bureaucrat::~Bureaucrat() {}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
  std::cout << "error high" << std::endl;
  return (char *)"Error";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
  std::cout << "error low" << std::endl;
  return (char *)"Error";
}