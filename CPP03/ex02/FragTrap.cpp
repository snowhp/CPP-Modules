// Created by tde-sous on 20-01-2024.
#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &Name) : ScavTrap(Name) {
  std::cout << "[FragTrap] Default constructor called\n";
  EnergyPoints_ = 100;
  AttackDamage_ = 30;
}

FragTrap::FragTrap(const FragTrap &other) : ScavTrap(other) {
  std::cout << "[FragTrap] Copy constructor called\n";
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
  std::cout << "[FragTrap] Copy assignment operator called\n";
  if (this == &other)
    return *this;
  this->Name_ = other.getName();
  this->HitPoints_ = other.getHitPoints();
  this->EnergyPoints_ = other.getEnergyPoints();
  this->AttackDamage_ = other.getAttackDamage();
  return *this;
}

FragTrap::~FragTrap() { std::cout << "[FragTrap] Destructor called\n"; }

void FragTrap::highFivesGuys() {
  std::cout << "[FragTrap] My name is " << getName()
            << " and I am sending a positive highFives for you <3!!";
}
