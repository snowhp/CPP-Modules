// Created by tde-sous on 01/13/24.

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(const float nb_float)
        : fpn(nb_float * float(1 << fractional) + (nb_float >= 0 ? 0.5 : -0.5)) {
    std::cout << "Float constructor called\n";
}

Fixed::Fixed(const int nb_integer)
        : fpn(nb_integer * int(1 << fractional) + (nb_integer >= 0 ? 0.5 : -0.5)) {
    std::cout << "Int constructor called\n";
}

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

float Fixed::toFloat() const {
    return (float(fpn) / float(1 << fractional));
}

int Fixed::toInt() const { return (int(fpn) / int(1 << fractional)); }

bool Fixed::operator>(const Fixed &other) const {
    return (this->toFloat() > other.toFloat());
}

bool Fixed::operator<(const Fixed &other) const {
    return (this->toFloat() < other.toFloat());
}

bool Fixed::operator>=(const Fixed &other) const {
    return (this->toFloat() >= other.toFloat());
}

bool Fixed::operator<=(const Fixed &other) const {
    return (this->toFloat() <= other.toFloat());
}

bool Fixed::operator==(const Fixed &other) const {
    return (this->toFloat() == other.toFloat());
}

bool Fixed::operator!=(const Fixed &other) const {
    return (this->toFloat() != other.toFloat());
}

Fixed Fixed::operator+(const Fixed &other) const {
    return this->toFloat() + other.toFloat();
}

Fixed Fixed::operator-(const Fixed &other) const {
    return this->toFloat() - other.toFloat();
}

Fixed Fixed::operator*(const Fixed &other) const {
    return this->toFloat() * other.toFloat();
}

Fixed Fixed::operator/(const Fixed &other) const {
    return this->toFloat() / other.toFloat();
}

Fixed &Fixed::operator++() {
    this->fpn++;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed duplicated(*this);
    operator++();
    return duplicated;
}

Fixed &Fixed::operator--() {
    this->fpn--;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed duplicated(*this);
    operator--();
    return duplicated;
}

Fixed &Fixed::min(Fixed &Fixed1, Fixed &Fixed2) {
    return (Fixed1 < Fixed2 ? Fixed1 : Fixed2);
}

const Fixed &Fixed::min(const Fixed &Fixed1, const Fixed &Fixed2) {
    return (Fixed1 < Fixed2 ? Fixed1 : Fixed2);
}

Fixed &Fixed::max(Fixed &Fixed1, Fixed &Fixed2) {
    return (Fixed1 > Fixed2 ? Fixed1 : Fixed2);
}

const Fixed &Fixed::max(const Fixed &Fixed1, const Fixed &Fixed2) {
    return (Fixed1 > Fixed2 ? Fixed1 : Fixed2);
}

std::ostream &operator<<(std::ostream &out, const Fixed &right) {
    out << right.toFloat();
    return (out);
}