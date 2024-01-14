// Created by tde-sous on 13-01-2024.

#include "Point.hpp"

float area_of_triangle(Point a, Point b, Point c) {
    float x0 = a.getX().toFloat();
    float x1 = b.getX().toFloat();
    float x2 = c.getX().toFloat();
    float y0 = a.getY().toFloat();
    float y1 = b.getY().toFloat();
    float y2 = c.getY().toFloat();
    float result = (x0 * (y1 - y2) + x1 * (y2 - y0) + x2 * (y0 - y1)) / 2;
    result = fabs(result);
    return (result);
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
    float const area1 = area_of_triangle(a, b, point);
    float const area2 = area_of_triangle(a, c, point);
    float const area3 = area_of_triangle(c, b, point);
    float const total_area = area_of_triangle(a, b, c);

    if (!area1 || !area2 || !area3)
        return false;
    else if (area1 + area2 + area3 == total_area)
        return true;
    else
        return false;
}