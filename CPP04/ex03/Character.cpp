// Created by tde-sous on 01-02-2024.
#include "Character.hpp"

Character::Character(std::string const &name) : name_(name) {
  std::cout << "[Character] Default constructor called.\n";
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