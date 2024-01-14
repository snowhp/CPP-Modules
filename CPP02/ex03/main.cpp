// Created by tde-sous on 01/13/24.
#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

void is_point_inside(const Point &A, const Point &B, const Point &C,
                     const Point &Point) {
  if (bsp(A, B, C, Point))
    std::cout << "Point is inside the triangle: True" << std::endl;
  else
    std::cout << "Point is inside the triangle: False" << std::endl;
}

int main() {
  Point A(3, 4);
  Point B(8, 4);
  Point C(2, -2);
  Point D(float(4), float(3)); // Point inside the triangle
  Point F(float(4), float(4)); // Point in the border of the triangle
  Point E(float(4.0183),
          float(3.9)); // Point inside the triangle close to the border
  Point G(float(4.00389),
          float(4.4035)); // Point outside the triangle close to the border
  Point H(float(-4.00389), float(-4.4035)); // Point outside the triangle
  Point I(float(2), float(-2)); // Point is on the vertex of the triangle
  is_point_inside(A, B, C, D);  // Point inside a triangle
  is_point_inside(A, B, C, F);  // Point in the border of a triangle
  is_point_inside(A, B, C, E);  // Point inside the triangle close to the border
  is_point_inside(A, B, C, G); // Point outside the triangle close to the border
  is_point_inside(A, B, C, H); // Point is on the vertex of the triangle
  return 0;
}