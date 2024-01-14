// Created by tde-sous on 14-01-2024.
#ifndef EX00_CLAPTRAP_HPP
#define EX00_CLAPTRAP_HPP

class ClapTrap {
public:
  ClapTrap();                                 // Default Constructor
  ClapTrap(const ClapTrap &other);            // Copy Constructor
  ClapTrap &operator=(const ClapTrap &other); // Copy Assignment Operator
  ~ClapTrap();                                // Destructor
};

#endif // EX00_CLAPTRAP_HPP