// Created by tde-sous on 13-01-2024.
#ifndef EX03_POINT_HPP
#define EX03_POINT_HPP

#include "Fixed.hpp"
#include <cmath>
#include <cstdlib>

class Point {
private:
  Fixed const x;
  Fixed const y;

public:
  Point(); // Default Constructor
  Point(Fixed x, Fixed y);

  Point(const Point &other);     // Copy Constructor
  Point &operator=(Point other); // Copy Assignment Operator
  ~Point();                      // Destructor
  Fixed getX();

  Fixed getY();
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif // EX03_POINT_HPP