// Created by tde-sous on 12-02-2024.
#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
  std::cout << "[MateriaSource] Default Constructor called." << std::endl;
  for (int i = 0; i < SLOTS; i++)
    this->learntMaterias_[i] = NULL;
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
  for (int i = 0; i < SLOTS; i++) {
    if (this->learntMaterias_[i])
      delete this->learntMaterias_[i];
    this->learntMaterias_[i] = other.learntMaterias_[i];
  }
  return *this;
}

MateriaSource::~MateriaSource() {
  std::cout << "[MateriaSource] Destructor called." << std::endl;
}
void MateriaSource::learnMateria(AMateria *materiaToLearn) {
  for (int i = 0; i <= SLOTS; i++) {
    if (i == SLOTS) {
      std::cout << "[MateriaSource] Not enought slots to learn a new Materia"
                << std::endl;
      return;
    } else if (!this->learntMaterias_[i]) {
      this->learntMaterias_[i] = materiaToLearn;
      return;
    }
  }
}

AMateria *MateriaSource::createMateria(std::string const &type) {
  for (int i = 0; i <= SLOTS; i++) {
    if (i == SLOTS) {
      std::cout << "[MateriaSource] No Materia with type: " << type
                << std::endl;
      return 0;
    } else if (this->learntMaterias_[i] &&
               this->learntMaterias_[i]->getType() == type) {
      return (this->learntMaterias_[i]->clone());
    }
  }
  return 0;
}