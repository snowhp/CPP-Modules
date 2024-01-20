// Created by tde-sous on 14-01-2024.

#include "FragTrap.hpp"

int main() {
  ClapTrap MachineA("Roboto");
  ClapTrap MachineB("Roboto");
  std::cout << "I am " << MachineA.getName() << std::endl
            << "HitPoints: " << MachineA.getHitPoints() << std::endl
            << "EnergyPoints: " << MachineA.getEnergyPoints() << std::endl
            << "AttackDamage: " << MachineA.getAttackDamage() << std::endl;
  MachineA.attack(MachineB.getName());
  MachineB.takeDamage(5);
  MachineA.beRepaired(1);

  std::cout << std::endl << std::endl;

  ScavTrap ScavA("Robert");
  std::cout << "I am " << ScavA.getName() << std::endl
            << "HitPoints: " << ScavA.getHitPoints() << std::endl
            << "EnergyPoints: " << ScavA.getEnergyPoints() << std::endl
            << "AttackDamage: " << ScavA.getAttackDamage() << std::endl;
  ScavA.guardGate();
  ScavA.attack("Pigeon");
  ScavA.takeDamage(10);

  ScavTrap ScavB(ScavA);
  ScavB.beRepaired(5);
  ScavB.beRepaired(1);

  ScavTrap ScavC = ScavA;
  ScavC.takeDamage(100);
  ScavC.takeDamage(100);
  ScavC.attack("Perry");

  FragTrap FragA("Michele");
  std::cout << "I am " << FragA.getName() << std::endl
            << "HitPoints: " << FragA.getHitPoints() << std::endl
            << "EnergyPoints: " << FragA.getEnergyPoints() << std::endl
            << "AttackDamage: " << FragA.getAttackDamage() << std::endl;
  for (int i = 0; i <= 100; i++) {
    std::cout << FragA.getEnergyPoints() << " ";
    FragA.attack("Tester");
  }

  FragTrap FragB(FragA);
  std::cout << FragB.getEnergyPoints() << " ";
  FragB.attack("Tester");

  FragTrap FragC("Replaced");
  FragC = FragB;
  std::cout << FragC.getEnergyPoints() << " ";
  FragC.attack("Tester");

  return 0;
}