// Created by tde-sous on 21-01-2024.
#include "Cat.hpp"

Cat::Cat() : Animal() {
  this->type = "Cat";
  this->CatBrain = new Brain();
  std::cout << "Cat -> Default constructor called!\n";
}

Cat::Cat(const Cat &other) : Animal(other) {
  std::cout << "Cat -> Default copy constructor called!\n";
  delete this->CatBrain;
  this->CatBrain = new Brain(*other.CatBrain);
}

Cat &Cat::operator=(const Cat &other) {
  std::cout << "Cat -> Copy assigment operator called!\n";
  if (this == &other)
    return *this;
  delete this->CatBrain;
  this->CatBrain = new Brain(*other.CatBrain);
  return *this;
}

Cat::~Cat() {
  delete this->CatBrain;
  std::cout << "Cat -> Destructorcalled!\n";
}

void Cat::makeSound() const {
  std::cout << "I am a Meow Meowwwww" << std::endl;
}