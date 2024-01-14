// Created by tde-sous on 13-01-2024.
#include "Point.hpp"

Point::Point() : x(Fixed(0)), y(Fixed(0)) {
  std::cout << "Default constructor called\n";
}

Point::Point(Fixed x, Fixed y) : x(x), y(y) {
  std::cout << "Constructor called\n";
}

Point::Point(const Point &other) : x(other.x), y(other.y) {
  std::cout << "Copy constructor called\n";
}

Point &Point::operator=(Point other) {
  if (this == &other)
    return *this;
  (Fixed) this->y = other.getY();
  (Fixed) this->x = other.getX();
  std::cout << "Copy assignment operator called\n";
  return *this;
}

Point::~Point() {
  // Destructor implementation
}

Fixed Point::getX() { return (this->x); }

Fixed Point::getY() { return (this->y); }