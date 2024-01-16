// Created by tde-sous on 16-01-2024.

#include "ClapTrap.hpp"

int main()
{
  ClapTrap MachineA("Roboto");
  ClapTrap MachineB("Roboto");
  MachineA.attack(MachineB.getName());
  MachineB.takeDamage(5);
  MachineA.beRepaired(1);
  return 0;
}