// Created by tde-sous on 21-01-2024.
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
  std::cout << "[WrongAnimal] Default constructor called.\n";
  this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
  std::cout << "[WrongAnimal] Copy constructor called.\n";
  this->type = other.type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
  std::cout << "[WrongAnimal] Copy assignment operator called.\n";
  if (this == &other)
    return *this;
  this->type = other.type;
  return *this;
}

WrongAnimal::~WrongAnimal() {
  std::cout << "[WrongAnimal] Destructor called.\n";
}

void WrongAnimal::makeSound() const {
  std::cout << "My sound is: " << type << std::endl;
}

std::string WrongAnimal::getType() const { return this->type; }
