// Created by tde-sous on 11/29/23.

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(float nb_float) : fpn(nb_float * float(1 << fractional) + (nb_float >= 0 ? 0.5 : -0.5)) {
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(int nb_integer) : fpn(nb_integer * int(1 << fractional) + (nb_integer >= 0 ? 0.5 : -0.5)) {
    std::cout << "Default constructor called\n";
}

Fixed::Fixed() : fpn(0) {
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &other) : fpn(other.fpn) {
    // Copy constructor implementation
    std::cout << "Copy constructor called\n";
}

Fixed &Fixed::operator=(const Fixed &other) {
    // Copy assignment operator implementation
    fpn = other.fpn;
    std::cout << "Copy assignment operator called\n";
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

void Fixed::setRawBits(const int raw) {
    fpn = raw;
}

float Fixed::toFloat(void) const {
    return ((float) fpn * (1 << fractional));
}

int Fixed::toInt(void) const {
    return ((int) fpn * (1 << fractional));
}
