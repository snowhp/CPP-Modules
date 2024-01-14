// Created by tde-sous on 11/29/23.

#ifndef EX00_FIXED_HPP
#define EX00_FIXED_HPP

class Fixed {
private:
  int fpn;
  static const int fractional = 8;

public:
  Fixed();                              // Default Constructor
  Fixed(const Fixed &other);            // Copy Constructor
  Fixed &operator=(const Fixed &other); // Copy Assignment Operator
  ~Fixed();                             // Destructor
  int getRawBits(void) const;

  void setRawBits(int const raw);
};

#endif // EX00_FIXED_HPP
