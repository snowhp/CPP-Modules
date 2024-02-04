// Created by tde-sous on 21-01-2024.
#include "WrongCat.hpp"

WrongCat::WrongCat() {
  std::cout << "[WrongCat] Default constructor called.\n";
  this->type = "Miauu";
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other) {
  std::cout << "[WrongCat] Copy constructor called.\n";
  this->type = other.type;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
  std::cout << "[WrongCat] Copy assignment operator called.\n";
  if (this == &other)
    return *this;
  this->type = other.type;
  return *this;
}

WrongCat::~WrongCat() {
  std::cout << "[WrongCat] Default destructor called.\n";
}

void WrongCat::makeSound() {
  std::cout << "I am wrong miau miau!" << std::endl;
}
