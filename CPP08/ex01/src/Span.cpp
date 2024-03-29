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
  if (this->numberList_.size() < 2)
    throw noSpanFound();

  std::vector<int>::iterator it_max;
  std::vector<int>::iterator it_min;
  it_max = std::max_element(this->numberList_.begin(), this->numberList_.end());
  it_min = std::min_element(this->numberList_.begin(), this->numberList_.end());
  return (abs(*it_max - *it_min));
}

int Span::shortestSpan() {
  if (this->numberList_.size() < 2)
    throw noSpanFound();

  std::sort(this->numberList_.begin(), this->numberList_.end());
  std::vector<int>::iterator it = this->numberList_.begin();
  int difference = abs(*it - *(it + 1));

  while (it != this->numberList_.end()) {
    if (abs(*it - *(it + 1)) < difference)
      difference = abs(*it - *(it + 1));
    it++;
  }
  return (difference);
}

void Span::addRandomNumbers(unsigned int quantity) {
  std::srand(static_cast<unsigned int>(std::time(NULL)));
  while (quantity > 0) {
    int randomNum = std::rand() - RAND_MAX / 2;
    this->addNumber(randomNum);
    std::cout << "Random number added: " << randomNum << std::endl;
    quantity--;
  }
}

const char *Span::maxCapacityException::what() const throw() {
  return "[Exception] Exceeded size of vector.";
}

const char *Span::noSpanFound ::what() const throw() {
  return "[Exception] No Span was found.";
}