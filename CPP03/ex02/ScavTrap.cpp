// Created by tde-sous on 18-01-2024.
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &Name) : ClapTrap(Name) {
  std::cout << "[ScavTrap] Default constructor called\n";
  HitPoints_ = 100;
  EnergyPoints_ = 50;
  AttackDamage_ = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
  std::cout << "[ScavTrap] Copy constructor called\n";
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
  std::cout << "[ScavTrap] Copy assignment operator called\n";
  if (this == &other)
    return *this;
  Name_ = other.getName();
  HitPoints_ = other.getHitPoints();
  EnergyPoints_ = other.getEnergyPoints();
  AttackDamage_ = other.getAttackDamage();
  return *this;
}

ScavTrap::~ScavTrap() { std::cout << "[ScavTrap] Destructor called\n"; }

void ScavTrap::guardGate() {
  std::cout << "[ScavTrap] " << getName() << " is now on Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string &target) {
  if (!this->isFunctional()) {
    std::cout << "[ScavTrap]" << this->getName() << " can't attack." << std::endl;
    return;
  }
  std::cout << "ScavTrap " << this->getName() << " attacks " << target
            << ", causing " << this->getAttackDamage() << " points of damage !"
            << std::endl;
  addEnergyPoints(-1);
}
