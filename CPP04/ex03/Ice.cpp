// Created by tde-sous on 26-01-2024.
#include "Ice.hpp"

Ice::Ice(std::string const &type) : AMateria(type) {
  std::cout << "[Ice] Default constructor called\n";
}

Ice::Ice(const Ice &other) : AMateria(other) {
  std::cout << "[Ice] Copy constructor called\n";
}

Ice &Ice::operator=(const Ice &other) {
  std::cout << "[Ice] Copy assignment operator called\n";
  if (this == &other)
    return (*this);
  this->type = other.type;
  return *this;
}

Ice::~Ice() { std::cout << "[Ice] Destructor called\n"; }
