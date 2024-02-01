// Created by tde-sous on 26-01-2024.
#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : type(type){
  std::cout << "[AMateria] Default constructor called\n";
}
AMateria::AMateria(const AMateria &other) {
  std::cout << "[AMateria] Copy constructor called\n";
  this->type = other.type;
}

AMateria &AMateria::operator=(const AMateria &other) {
  std::cout << "[AMateria] Copy assignment operator called\n";
  if (*this == &other)
    return *this;
  this->type = other.type;
  return *this;
}

AMateria::~AMateria() {
  std::cout << "[AMateria] Destructor called\n";
}

const int &AMateria::getType() const { return (type); }

void AMateria::use(int &target) {}
