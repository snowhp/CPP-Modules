// Created by tde-sous on 21-01-2024.
#include "Cat.hpp"

Cat::Cat() : Animal() {
  this->type = "Cat";
  std::cout << "Cat -> Default constructor called!\n";
}

Cat::Cat(const Cat &other) : Animal(other) {
  std::cout << "Cat -> Default copy constructor called!\n";
  this->type = other.type;
}

Cat &Cat::operator=(const Cat &other) {
  std::cout << "Cat -> Copy assigment operator called!\n";
  if (this == &other)
    return *this;
  this->type = other.type;
  return *this;
}

Cat::~Cat() { std::cout << "Cat -> Destructorcalled!\n"; }