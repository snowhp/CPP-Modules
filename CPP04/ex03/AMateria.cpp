// Created by tde-sous on 26-01-2024.
#include "AMateria.hpp"

AMateria::AMateria() { std::cout << "[AMateria] Default constructor called\n"; }

AMateria::AMateria(std::string const &type) {
  (void)type;
  std::cout << "[AMateria] Constructor with parameter type called\n";
}
AMateria::AMateria(const AMateria &other) {
  (void)other;
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

void AMateria::use(ICharacter &target) {
  std::cout << "I shouldn't be able to use this on " << target.getName()
            << std::endl;
}
