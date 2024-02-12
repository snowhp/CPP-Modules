// Created by tde-sous on 01-02-2024.
#include "Character.hpp"

Character::Character(std::string const &name) : name_(name) {
  std::cout << "[Character] Default constructor called." << std::endl;
  for (int i = 0; i < SLOTS; i++)
    this->inventory_[i] = NULL;
}

Character::Character(const Character &other) {
  (void)other;
  std::cout << "[Character] Copy constructor called." << std::endl;
}

Character &Character::operator=(const Character &other) {
  (void)other;
  std::cout << "[Character] Copy assigment operator called." << std::endl;
  return *this;
}

Character::~Character() {
  for (int i = 0; i < SLOTS; i++) {
    if (this->inventory_[i])
      delete this->inventory_[i];
  }
  while (this->unequipedMaterias_.size() > 0) {
    delete this->unequipedMaterias_.front();
    this->unequipedMaterias_.pop_front();
  }
  std::cout << "[Character] Destructor called." << std::endl;
}

const std::string &Character::getName() const { return (this->name_); }

void Character::equip(AMateria *m) {
  for (int i = 0; i <= SLOTS; i++) {
    if (i == SLOTS) {
      std::cout << "I tried to equip a " << m->getType() << " but I'm full!" << std::endl;
      return;
    }
    if (!this->inventory_[i]) {
      this->inventory_[i] = m;
      return;
    }
  }
}

void Character::unequip(int idx) {
  if (idx >= SLOTS) {
    std::cout << "Invalid slot number provided!" << std::endl;
  } else if (!this->inventory_[idx]) {
    std::cout << "Trying to unequip a unexisting slot!" << std::endl;
  } else {
    this->unequipedMaterias_.push_front(this->inventory_[idx]);
    this->inventory_[idx] = NULL;
  }
}

void Character::use(int idx, ICharacter &target) {
  if (idx >= SLOTS) {
    std::cout << "Invalid slot number provided!" << std::endl;
  } else if (!this->inventory_[idx])
    std::cout << "This slot is empty at the moment!" << std::endl;
  else
    this->inventory_[idx]->use(target);
}
