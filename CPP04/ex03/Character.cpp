// Created by tde-sous on 01-02-2024.
#include "Character.hpp"

Character::Character(std::string const &name) : name_(name) {
  std::cout << "[Character] Default constructor called.\n";
  for (int i = 0; i < SLOTS; i++)
    this->inventory_[i] = NULL;
}

Character::Character(const Character &other) {
  std::cout << "[Character] Copy constructor called.\n";
}

Character &Character::operator=(const Character &other) {
  std::cout << "[Character] Copy assigment operator called.\n";
  return *this;
}

Character::~Character() {
  std::cout << "[Character] Destructor called.\n";
}

const std::string &Character::getName() const { return (this->name_); }

void Character::equip(AMateria *m) {
  for (int i = 0; i <= SLOTS; i++) {
    if (i == SLOTS)
      std::cout << "I tried to equip a " << m->getType() << " but I'm full!\n";
    if (!this->inventory_[i])
      this->inventory_[i] == m;
  }
}
