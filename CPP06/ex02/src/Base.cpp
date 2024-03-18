// Created by tde-sous on 15-03-2024.
#include "../inc/Base.hpp"

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base() {}

Base *generate(void) {
  std::srand(time(NULL));

  switch (std::rand() % 3) {
  case 0:
    std::cout << "A CLASS GENERATED" << std::endl;
    return (new A());
  case 1:
    std::cout << "B CLASS GENERATED" << std::endl;
    return (new B());
  case 2:
    std::cout << "C CLASS GENERATED" << std::endl;
    return (new C());
  default:
    std::cout << "Error encountered on Base generate" << std::endl;
    exit(1);
  }
}

void identify(Base *p) {
  if (dynamic_cast<A *>(p))
    std::cout << "A" << std::endl;
  else if (dynamic_cast<B *>(p))
    std::cout << "B" << std::endl;
  else if (dynamic_cast<C *>(p))
    std::cout << "C" << std::endl;
  else
    std::cout << "Type not identified" << std::endl;
}

void identify(Base &p) {
  try {
    (void)dynamic_cast<A &>(p);
    std::cout << "-> A <-" << std::endl;
    return;
  } catch (const std::exception &e) {
  }
  try {
    (void)dynamic_cast<B &>(p);
    std::cout << "-> B <-" << std::endl;
    return;
  } catch (const std::exception &e) {
  }
  try {
    (void)dynamic_cast<C &>(p);
    std::cout << "-> C <-" << std::endl;
    return;
  } catch (const std::exception &e) {
    std::cout << "-> Type not identified <-" << std::endl;
  }
}
