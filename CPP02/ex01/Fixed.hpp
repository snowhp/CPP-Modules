// Created by tde-sous on 11/29/23.

#ifndef EX01_FIXED_HPP
#define EX01_FIXED_HPP

#include <iostream>

class Fixed {
private:
  int fpn;
  static const int fractional = 8;

public:
  Fixed(const int nb_integer);

  Fixed(const float nb_float);

  Fixed();                              // Default Constructor
  Fixed(const Fixed &other);            // Copy Constructor
  Fixed &operator=(const Fixed &other); // Copy Assignment Operator
  ~Fixed();                             // Destructor
  int getRawBits(void) const;

  void setRawBits(int const raw);

  float toFloat(void) const;

  int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &right);

#endif // EX01_FIXED_HPP
