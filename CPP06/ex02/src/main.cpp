// Created by tde-sous on 15-03-2024.

#include "Base.hpp"

class D : public Base {

};

int main() {
  Base *derivedClass = generate();
  identify(derivedClass);
  identify(*derivedClass);

  Base *wrongClass = new D;
  identify(wrongClass);
  identify(*wrongClass);
}