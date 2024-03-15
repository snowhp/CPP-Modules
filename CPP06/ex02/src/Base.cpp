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