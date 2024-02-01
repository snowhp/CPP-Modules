// Created by tde-sous on 26-01-2024.
#include "AMateria.hpp"

AMateria::AMateria(const int &type) {
  std::cout << "[AMateria] Default constructor called\n";
}
AMateria::AMateria(const AMateria &other) {
  std::cout << "[AMateria] Copy constructor called\n";
}

AMateria &AMateria::operator=(const AMateria &other) {
  std::cout << "[AMateria] Copy assignment operator called\n";
  return *this;
}

AMateria::~AMateria() {
  std::cout << "[AMateria] Destructor called\n";
}

const int &AMateria::getType() const {}

void AMateria::use(int &target) {}
