// Created by tde-sous on 26-01-2024.
#include "AMateria.hpp"

#include <initializer_list>

AMateria::AMateria() { std::cout << "[AMateria] Default constructor called\n"; }

AMateria::AMateria(std::string const &type) {
  std::cout << "[AMateria] Constructor with parameter type called\n";
}
AMateria::AMateria(const AMateria &other) {
  std::cout << "[AMateria] Copy constructor called\n";
}

AMateria &AMateria::operator=(const AMateria &other) {
  std::cout << "[AMateria] Copy assignment operator called\n";
  if (this == &other)
    return *this;
  return *this;
}

AMateria::~AMateria() { std::cout << "[AMateria] Destructor called\n"; }

std::string const &AMateria::getType() const { return (this->type); }

void use(ICharacter &target) {
  std::cout << "I shouldn't be able to use this on " << target.getName()
            << std::endl;
}
