// Created by tde-sous on 13-01-2024.
#include "Point.hpp"


Point::Point() : x(Fixed(0)), y(Fixed(0)){
    // Default constructor implementation
}

Point::Point(Fixed x, Fixed y) : x(x), y(y) {
}

Point::Point(const Point &other) {
    // Copy constructor implementation
}

Point &Point::operator=(const Point &other) {
    // Copy assignment operator implementation
    return *this;
}

Point::~Point() {
    // Destructor implementation
}
