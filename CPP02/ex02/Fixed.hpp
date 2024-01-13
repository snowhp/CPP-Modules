// Created by tde-sous on 12/19/23.

#ifndef EX02_FIXED_HPP
#define EX02_FIXED_HPP

#include <iostream>

class Fixed {
private:
    int fpn;
    static const int fractional = 8;

public:
    Fixed(int nb_integer);

    Fixed(float nb_float);

    Fixed();                              // Default Constructor
    Fixed(const Fixed &other);            // Copy Constructor
    Fixed &operator=(const Fixed &other); // Copy Assignment Operator
    ~Fixed();                             // Destructor
    int getRawBits() const;

    void setRawBits(const int raw);

    float toFloat() const;

    int toInt() const;

    bool operator>(const Fixed &other) const;

    bool operator<(const Fixed &other) const;

    bool operator>=(const Fixed &other) const;

    bool operator<=(const Fixed &other) const;

    bool operator==(const Fixed &other) const;

    bool operator!=(const Fixed &other) const;

    Fixed operator+(const Fixed &other) const;

    Fixed operator-(const Fixed &other) const;

    Fixed operator*(const Fixed &other) const;

    Fixed operator/(const Fixed &other) const;

    Fixed &operator++();

    Fixed operator++(int);
};

std::ostream &operator<<(std::ostream &out, const Fixed &right);

#endif // EX02_FIXED_HPP
