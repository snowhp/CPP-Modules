// Created by tde-sous on 12/19/23.
#include "Fixed.hpp"

int main(void) {
    Fixed a(3);
    Fixed const b(2);
    std::cout << "A(" << a.toFloat() << ") is greater than B(" << b.toFloat() << "): " << (a > b) << std::endl;
    std::cout << "A(" << a.toFloat() << ") is less than B(" << b.toFloat() << "): " << (a < b) << std::endl;
    std::cout << "A(" << a.toFloat() << ") is greater or equal than B(" << b.toFloat() << "): " << (a >= b)
              << std::endl;
    std::cout << "A(" << a.toFloat() << ") is less than or equal to B(" << b.toFloat() << "): " << (a <= b)
              << std::endl;
    std::cout << "A(" << a.toFloat() << ") is equal to B(" << b.toFloat() << "): " << (a == b) << std::endl;
    std::cout << "A(" << a.toFloat() << ") is different than B(" << b.toFloat() << "): " << (a != b) << std::endl;

    Fixed sum = a + b;
    std::cout << "A + B is equal to " << sum.toFloat() << std::endl;

    Fixed sub = a - b;
    std::cout << "A - B is equal to " << sub.toFloat() << std::endl;

    Fixed mul = a * b;
    std::cout << "A * B is equal to " << mul.toFloat() << std::endl;
    return 0;
}