// Created by tde-sous on 21-01-2024.

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() {
  const Animal *Animal1 = new Animal();
  const Animal *Animal2 = Animal1;
  const Animal *Dog1 = new Dog();
  const Animal *i = new Cat();
  std::cout << Dog1->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;
  i->makeSound(); // Outputs the cat sound!
  Dog1->makeSound();
  Animal1->makeSound();
  Animal2->makeSound();

  delete Animal1;
  delete Dog1;
  delete i;

  std::cout << "==== Wrong classes tests ====\n";

  // Additional tests with WrongCat
  const WrongAnimal *metaa = new WrongAnimal();
  const WrongAnimal *jj = new WrongCat();
  const WrongAnimal *ii = new WrongCat();
  std::cout << jj->getType() << " " << std::endl;
  std::cout << ii->getType() << " " << std::endl;
  ii->makeSound(); // will output the cat sound!
  jj->makeSound();
  metaa->makeSound();

  delete metaa;
  delete jj;
  delete ii;
  return 0;
}