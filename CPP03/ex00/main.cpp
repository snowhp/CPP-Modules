// Created by tde-sous on 14-01-2024.

#include "ClapTrap.hpp"

int main()
{
  ClapTrap MachineA("Roboto");
  ClapTrap MachineB("Roboto");
  MachineA.attack(MachineB.getName());
  MachineB.takeDamage(1000);
  MachineB.attack("Tests");
  return 0;
}