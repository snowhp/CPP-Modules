// Created by tde-sous on 13-01-2024.
#ifndef EX03_POINT_HPP
#define EX03_POINT_HPP


class Point {
public:
    Point(); // Default Constructor
    Point(const Point &other); // Copy Constructor
    Point &operator=(const Point &other); // Copy Assignment Operator
    ~Point(); // Destructor
};


#endif //EX03_POINT_HPP