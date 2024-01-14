// Created by tde-sous on 01/13/24.
#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

void is_point_inside(Point A, Point B, Point C, Point Point) {
    if (bsp(A, B, C, Point))
        std::cout << "Point is inside the triangle: True" << std::endl;
    else
        std::cout << "Point is inside the triangle: False" << std::endl;
}

int main(void) {
    Point A(3, 4);
    Point B(8, 4);
    Point C(3, 0);
    Point Point(float(4), float(3));
    is_point_inside(A, B, C, Point);
    return 0;
}