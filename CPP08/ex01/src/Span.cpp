// Created by tde-sous on 3/27/24.
#include "Span.hpp"

Span::Span(unsigned int N) : maxStorage_(N) {
  std::cout << "Constructor called!" << std::endl;
}
Span::Span() : maxStorage_() {
  std::cout << "Default constructor called!" << std::endl;
}

Span::Span(const Span &other) : maxStorage_() {
  std::cout << "Copy constructor called!" << std::endl;
  this->maxStorage_ = other.maxStorage_;
}

Span &Span::operator=(const Span &other) {
  std::cout << "Copy assignment operator called!" << std::endl;
  if (this == &other)
    return *this;
  this->maxStorage_ = other.maxStorage_;
  return *this;
}

Span::~Span() { std::cout << "Destructor called!" << std::endl; }

void Span::addNumber(int number) {
  if (this->numberList_.size() + 1 == this->maxStorage_)
    throw maxCapacityException();
  this->numberList_.push_back(number);
}

const char *Span::maxCapacityException::what() const throw() {
  return "[Exception] Exceeded size of vector";
}