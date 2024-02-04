// Created by tde-sous on 26-01-2024.

#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

// Own tests
int main() {
  const AMateria *Ice_1 = new Ice();
  const AMateria *Cure_1 = new Cure();
  Character Char_3("mario");
  Ice_1->getType();
  Cure_1->getType();
}

// Subject Main test
/*
int main() {
  IMateriaSource *src = new MateriaSource();
  src->learnMateria(new Ice());
  src->learnMateria(new Cure());
  ICharacter *me = new Character("me");
  AMateria *tmp;
  tmp = src->createMateria("ice");
  me->equip(tmp);
  tmp = src->createMateria("cure");
  me->equip(tmp);
  ICharacter *bob = new Character("bob");
  me->use(0, *bob);
  me->use(1, *bob);
  delete bob;
  delete me;
  delete src;
  return 0;
}*/
