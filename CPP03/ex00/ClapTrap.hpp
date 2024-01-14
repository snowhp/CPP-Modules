// Created by tde-sous on 14-01-2024.
#ifndef EX00_CLAPTRAP_HPP
#define EX00_CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
private:
  std::string _Name; // Name of the ClapTrap
  int _HitPoints;    // Represent the health of the ClapTrap
  int _EnergyPoints; // Energy Points
  int _AttackDamage; // Attack Damage
public:
  ClapTrap(std::string Name);                 // Default Constructor
  ClapTrap(const ClapTrap &other);            // Copy Constructor
  ClapTrap &operator=(const ClapTrap &other); // Copy Assignment Operator
  ~ClapTrap();                                // Destructor
  std::string getName() const;
  int getHitPoints() const;
  int getEnergyPoints() const;
  int getAttackDamage() const;
  void attack(const std::string &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
};

#endif // EX00_CLAPTRAP_HPP