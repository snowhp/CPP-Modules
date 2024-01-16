// Created by tde-sous on 16-01-2024.
#ifndef EX01_CLAPTRAP_HPP
#define EX01_CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
private:
  std::string _Name; // Name of the ClapTrap
  int _HitPoints;    // Represent the health of the ClapTrap
  int _EnergyPoints; // Energy Points
  int _AttackDamage; // Attack Damage
public:
  explicit ClapTrap(std::string Name);                 // Default Constructor
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
  bool isFunctional() const; // True if have energy point and hit points else false
  void addHitPoints(int amount);
  void addEnergyPoints(int amount);
};

#endif // EX01_CLAPTRAP_HPP