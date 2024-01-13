// Created by tde-sous on 01/13/24.

#ifndef EX03_FIXED_HPP
#define EX03_FIXED_HPP

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

    Fixed &operator--();

    Fixed operator--(int);

    static Fixed &min(Fixed &Fixed1, Fixed &Fixed2);

    static const Fixed &min(const Fixed &Fixed1, const Fixed &Fixed2);

    static Fixed &max(Fixed &Fixed1, Fixed &Fixed2);

    static const Fixed &max(const Fixed &Fixed1, const Fixed &Fixed2);
};

std::ostream &operator<<(std::ostream &out, const Fixed &right);

#endif // EX03_FIXED_HPP
