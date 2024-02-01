// Created by tde-sous on 26-01-2024.
#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : type(type){
  std::cout << "[AMateria] Default constructor called\n";
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

AMateria::~AMateria() {
  std::cout << "[AMateria] Destructor called\n";
}

std::string const &AMateria::getType() const { return (this->type); }

//void AMateria::use(int &target) {}
