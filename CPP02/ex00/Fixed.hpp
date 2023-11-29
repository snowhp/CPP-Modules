// Created by tde-sous on 11/29/23.

#ifndef EX00_FIXED_HPP
#define EX00_FIXED_HPP


class Fixed {
public:
    Fixed(); // Default Constructor
    Fixed(const Fixed &other); // Copy Constructor
    Fixed &operator=(const Fixed &other); // Copy Assignment Operator
    ~Fixed(); // Destructor
};


#endif //EX00_FIXED_HPP
