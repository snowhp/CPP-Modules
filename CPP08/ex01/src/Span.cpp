// Created by tde-sous on 3/27/24.
#include "Span.hpp"

Span::Span(unsigned int N) : maxStorage_(N) {
  std::cout << "Constructor called!" << std::endl;
}
Span::Span() : maxStorage_() { std::cout << "Default constructor called!" << std::endl; }

Span::Span(const Span &other) {
  (void)other;
  std::cout << "Copy constructor called!" << std::endl;
}

Span &Span::operator=(const Span &other) {
  std::cout << "Copy assignment operator called!" << std::endl;
  if (this == &other)
    return *this;
  return *this;
}

Span::~Span() { std::cout << "Destructor called!" << std::endl; }
