// Created by tde-sous on 01-02-2024.
#include "Cure.hpp"

Cure::Cure(std::string const &type) : AMateria(type) {
  std::cout << "[Cure] Default constructor called\n";
}

Cure::Cure(const Cure &other) : AMateria(other) {
  std::cout << "[Cure] Copy constructor called\n";
}

Cure &Cure::operator=(const Cure &other) {
  std::cout << "[Cure] Copy assignment operator called\n";
  if (this == &other)
    return (*this);
  this->type = other.type;
  return *this;
}

Cure::~Cure() { std::cout << "[Cure] Destructor called\n"; }
