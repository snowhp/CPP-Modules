// Created by tde-sous on 13-01-2024.
#ifndef EX03_POINT_HPP
#define EX03_POINT_HPP

#include "Fixed.hpp"

class Point {
private:
    Fixed const x;
    Fixed const y;
public:
    Point(); // Default Constructor
    Point(Fixed x,Fixed y);

    Point(const Point &other); // Copy Constructor
    Point &operator=(const Point &other); // Copy Assignment Operator
    ~Point(); // Destructor
};


#endif //EX03_POINT_HPP