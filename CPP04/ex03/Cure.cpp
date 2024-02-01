// Created by tde-sous on 01-02-2024.
#include "Cure.hpp"

Cure::Cure() { std::cout << "[Cure] Default constructor called\n"; }

Cure::Cure(const Cure &other) {
  std::cout << "[Cure] Copy constructor called\n";
}

Cure &Cure::operator=(const Cure &other) {
  std::cout << "[Cure] Copy assignment operator called\n";
  return *this;
}

Cure::~Cure() { std::cout << "[Cure] Destructor called\n"; }
