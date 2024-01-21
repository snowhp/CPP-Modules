// Created by tde-sous on 20-01-2024.
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string &Name) : FragTrap, ClapTrap {}


DiamondTrap::DiamondTrap(const DiamondTrap &other) {}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) { return *this; }

DiamondTrap::~DiamondTrap() {}
