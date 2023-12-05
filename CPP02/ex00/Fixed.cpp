// Created by tde-sous on 11/29/23.

#include "Fixed.hpp"


Fixed::Fixed() : fpn(0){
}

Fixed::Fixed(const Fixed &other) : fpn(other.fpn){
    // Copy constructor implementation
}

Fixed &Fixed::operator=(const Fixed &other) {
    // Copy assignment operator implementation
    fpn = this->fpn;
    return *this;
}

Fixed::~Fixed() {
    // Destructor implementation
}

int Fixed::getRawBits(void) const {
    return (fpn);
}

void Fixed::setRawBits(const int raw) {
    fpn = raw;
}
