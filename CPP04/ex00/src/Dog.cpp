// Created by tde-sous on 21-01-2024.
#include "Dog.hpp"

Dog::Dog() : Animal() {
  this->type = "Dog";
  std::cout << "Dog -> Default constructor called!\n";
}

Dog::Dog(const Dog &other) : Animal(other) {
  std::cout << "Dog -> Default copy constructor called!\n";
  this->type = other.type;
}

Dog &Dog::operator=(const Dog &other) {
  std::cout << "Dog -> Copy assigment operator called!\n";
  if (this == &other)
    return *this;
  this->type = other.type;
  return *this;
}

Dog::~Dog() { std::cout << "Dog -> Destructor called!\n"; }

void Dog::makeSound() const {
  std::cout << "I am a auf auf auffff...." << std::endl;
}
