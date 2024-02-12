// Created by tde-sous on 01-02-2024.
#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
  std::cout << "[Cure] Default constructor called" << std::endl;
}

Cure::Cure(const Cure &other) : AMateria(other) {
  std::cout << "[Cure] Copy constructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &other) {
  std::cout << "[Cure] Copy assignment operator called" << std::endl;
  if (this == &other)
    return (*this);
  this->type_ = other.type_;
  return *this;
}

Cure::~Cure() { std::cout << "[Cure] Destructor called" << std::endl; }

AMateria *Cure::clone() const {
  Cure *clone = new Cure;
  return clone;
}

void Cure::use(ICharacter &target) {
  std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
