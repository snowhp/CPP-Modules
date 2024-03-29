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
  this->numberList_ = other.numberList_;
}

Span &Span::operator=(const Span &other) {
  std::cout << "Copy assignment operator called!" << std::endl;
  if (this == &other)
    return *this;
  this->maxStorage_ = other.maxStorage_;
  this->numberList_ = other.numberList_;
  return *this;
}

Span::~Span() { std::cout << "Destructor called!" << std::endl; }

void Span::addNumber(int number) {
  if (this->numberList_.size() + 1 > this->maxStorage_)
    throw maxCapacityException();
  this->numberList_.push_back(number);
}

int Span::longestSpan() {
  std::vector<int>::iterator it_max;
  std::vector<int>::iterator it_min;
  it_max = std::max_element(this->numberList_.begin(), this->numberList_.end());
  it_min = std::min_element(this->numberList_.begin(), this->numberList_.end());
  if (*it_min == *it_max || this->numberList_.size() < 2)
    throw noSpanFound();
  return (abs(*it_max - *it_min));
}

const char *Span::maxCapacityException::what() const throw() {
  return "[Exception] Exceeded size of vector.";
}

const char *Span::noSpanFound ::what() const throw() {
  return "[Exception] No Span was found.";
}