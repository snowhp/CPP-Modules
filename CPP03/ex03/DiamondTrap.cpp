// Created by tde-sous on 20-01-2024.
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string &Name)
    : ClapTrap(Name), FragTrap(Name), ScavTrap(Name) {
  this->Name_ = Name;
  this->ClapTrap::Name_ = Name + "_clap_name";
  this->HitPoints_ = 100;
  this->EnergyPoints_ = 50;
  this->AttackDamage_ = 30;
  std::cout << "[DiamondTrap] Default constructor called\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
    : ClapTrap(other.Name_), FragTrap(other.Name_), ScavTrap(other.Name_) {
  this->Name_ = other.Name_;
  std::cout << "[DiamondTrap] Copy constructor called\n";
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
  std::cout << "[DiamondTrap] Copy assignment operator called\n";
  if (this == &other)
    return *this;
  this->Name_ = other.Name_;
  this->ClapTrap::Name_ = other.ClapTrap::Name_;
  this->HitPoints_ = other.HitPoints_;
  this->EnergyPoints_ = other.EnergyPoints_;
  this->AttackDamage_ = other.AttackDamage_;
  return *this;
}

DiamondTrap::~DiamondTrap() {
  std::cout << "[DiamondTrap] Destructor called\n";
}
