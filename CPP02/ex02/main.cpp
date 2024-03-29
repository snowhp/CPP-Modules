// Created by tde-sous on 12/19/23.
#include "Fixed.hpp"

/*int main(void) {
    Fixed a(3);
    Fixed const b(2);
    std::cout << "A(" << a.toFloat() << ") is greater than B(" << b.toFloat() <<
"): " << (a > b) << std::endl; std::cout << "A(" << a.toFloat() << ") is less
than B(" << b.toFloat() << "): " << (a < b) << std::endl; std::cout << "A(" <<
a.toFloat() << ") is greater or equal than B(" << b.toFloat() << "): " << (a >=
b)
              << std::endl;
    std::cout << "A(" << a.toFloat() << ") is less than or equal to B(" <<
b.toFloat() << "): " << (a <= b)
              << std::endl;
    std::cout << "A(" << a.toFloat() << ") is equal to B(" << b.toFloat() << "):
" << (a == b) << std::endl; std::cout << "A(" << a.toFloat() << ") is different
than B(" << b.toFloat() << "): " << (a != b) << std::endl;

    Fixed sum = a + b;
    std::cout << "A + B is equal to " << sum.toFloat() << std::endl;

    Fixed sub = a - b;
    std::cout << "A - B is equal to " << sub.toFloat() << std::endl;

    Fixed mul = a * b;
    std::cout << "A * B is equal to " << mul.toFloat() << std::endl;

    Fixed div = a / b;
    std::cout << "A / B is equal to " << div.toFloat() << std::endl;

    std::cout << "Old value of A is " << a << ". A on increment is " << ++a
              << " A post increment is "
              << a << std::endl;

    std::cout << "Old value of A is " << a << ". A on increment is " << a++
              << " A post increment is "
              << a << std::endl;

    std::cout << "Old value of A is " << a << ". A on increment is " << --a
              << " A post increment is "
              << a << std::endl;

    std::cout << "Old value of A is " << a << ". A on increment is " << a--
              << " A post increment is "
              << a << std::endl;

    std::cout << "The min between A and B is " << Fixed::min(a, b) << std::endl;

    std::cout << "The max between A and B is " << Fixed::max(a, b) << std::endl;
    return 0;
}*/

int main(void) {
  Fixed a;
  Fixed const b(Fixed(5.05f) * Fixed(2));
  std::cout << a << std::endl;
  std::cout << ++a << std::endl;
  std::cout << a << std::endl;
  std::cout << a++ << std::endl;
  std::cout << a << std::endl;
  std::cout << b << std::endl;
  std::cout << Fixed::max(a, b) << std::endl;
  return 0;
}