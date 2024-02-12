// Created by tde-sous on 26-01-2024.

#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

// Own tests
int main() {
  const AMateria *Ice_1 = new Ice();
  const AMateria *Cure_1 = new Cure();
  Ice Ice_2;
  Cure Cure_2;
  Character Char_3("mario");
  std::cout << "Ice_1 type: " << Ice_1->getType() << std::endl;
  std::cout << "Ice_2 type: " << Ice_2.getType() << std::endl;
  std::cout << "Cure_1 type: " << Cure_1->getType() << std::endl;
  Ice_2.use(Char_3);
  Char_3.equip(&Ice_2);
  Char_3.equip(&Cure_2);
  Char_3.use(0, Char_3);
  delete Ice_1;
  delete Cure_1;
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
