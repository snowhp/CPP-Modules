// Created by tde-sous on 11/29/23.

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : fpn(0) { std::cout << "Default constructor called\n"; }

Fixed::Fixed(const Fixed &other) : fpn(other.fpn) {
  // Copy constructor implementation
  std::cout << "Copy constructor called\n";
}

Fixed &Fixed::operator=(const Fixed &other) {
  // Copy assignment operator implementation
  std::cout << "Copy assignment operator called\n";
  if (this == &other)
    return *this;
  this->setRawBits(other.getRawBits());
  return *this;
}

Fixed::~Fixed() {
  std::cout << "Destructor called\n";
  // Destructor implementation
}

int Fixed::getRawBits(void) const {
  std::cout << "getRawBits member function called\n";
  return (fpn);
}

void Fixed::setRawBits(const int raw) { fpn = raw; }
