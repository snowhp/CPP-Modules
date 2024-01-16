// Created by tde-sous on 16-01-2024.
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string Name) {
  std::cout << "Default Constructor called\n";
  this->_Name = Name;
  this->_HitPoints = 10;
  this->_EnergyPoints = 10;
  this->_AttackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
  std::cout << "Copy constructor called\n";
  *this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
  std::cout << "Copy assignment operator called\n";
  if (this == &other)
    return *this;
  this->_Name = other.getName();
  this->_HitPoints = other.getHitPoints();
  this->_EnergyPoints = other.getEnergyPoints();
  this->_AttackDamage = other.getAttackDamage();
  return *this;
}

ClapTrap::~ClapTrap() {
  std::cout << "Destructor called\n";
  // Destructor implementation
}

std::string ClapTrap::getName() const { return (this->_Name); }

int ClapTrap::getHitPoints() const { return (this->_HitPoints); }

int ClapTrap::getEnergyPoints() const { return (this->_EnergyPoints); }
int ClapTrap::getAttackDamage() const { return (this->_AttackDamage); }

void ClapTrap::attack(const std::string &target) {
  if (!this->isFunctional()) {
    std::cout << this->getName() << " can't attack." << std::endl;
    return;
  }
  std::cout << "ClapTrap " << this->getName() << " attacks " << target
            << ", causing " << this->getAttackDamage() << " points of damage !"
            << std::endl;
  addEnergyPoints(-1);
}

void ClapTrap::takeDamage(unsigned int amount) {
  addHitPoints(-(int(amount)));
  std::cout << "OUCH!!! I got a " << amount << " HitDamage." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (!this->isFunctional()) {
    std::cout << this->getName() << " can't be repaired." << std::endl;
    return;
  }
  addHitPoints(int(amount));
  addEnergyPoints(-1);
  std::cout << this->getName() << " himself repaired for " << amount
            << " of HitPoints" << std::endl;
}

bool ClapTrap::isFunctional() const {
  if (getEnergyPoints() && getHitPoints())
    return true;
  return false;
}

void ClapTrap::addEnergyPoints(int amount) { this->_EnergyPoints += amount; }

void ClapTrap::addHitPoints(int amount) { this->_HitPoints += amount; }
