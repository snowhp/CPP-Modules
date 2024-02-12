// Created by tde-sous on 12-02-2024.
#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
  std::cout << "[MateriaSource] Default Constructor called." << std::endl;
  for (int i = 0; i < SLOTS; i++)
    this->learntMaterias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &other) {
  (void)other;
  std::cout << "[MateriaSource] Copy Constructor called." << std::endl;
  *this = other;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other) {
  (void)other;
  std::cout << "[MateriaSource] Copy assignment operator called." << std::endl;
  if (this == &other)
    return *this;
  return *this;
}

MateriaSource::~MateriaSource() {
  std::cout << "[MateriaSource] Destructor called." << std::endl;
}

void MateriaSource::learnMateria(AMateria *) {}

AMateria *MateriaSource::createMateria(std::string const &type) {
  (void)type;
  return NULL;
}