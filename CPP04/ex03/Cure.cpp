// Created by tde-sous on 01-02-2024.
#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
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

AMateria *Cure::clone() const {
  Cure *clone = new Cure;
  return clone;
}
