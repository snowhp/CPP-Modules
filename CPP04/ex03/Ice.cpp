// Created by tde-sous on 26-01-2024.
#include "Ice.hpp"

Ice::Ice() { std::cout << "[Ice] Default constructor called\n"; }

Ice::Ice(const Ice &other) { std::cout << "[Ice] Copy constructor called\n"; }

Ice &Ice::operator=(const Ice &other) {
  std::cout << "[Ice] Copy assignment operator called\n";

  return *this;
}

Ice::~Ice() { std::cout << "[Ice] Destructor called\n"; }
