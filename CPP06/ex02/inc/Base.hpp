// Created by tde-sous on 15-03-2024.
#ifndef EX02_BASE_HPP
#define EX02_BASE_HPP

#include <cstdlib>
#include <ctime>
#include <iostream>

class Base {
public:
  /**
   * @brief Destructor.
   */
  virtual ~Base();
};

/**
 * @brief It randomly instantiates A, B or C and returns the instance as a Base
 * pointer.
 * @return The instance as a Base pointer.
 */
Base *generate(void);

/**
 * @brief It prints the actual type of the object pointed to by p: "A", "B" or "C".
 * @param p The Base pointer to be checked.
 */
void identify(Base* p);

/**
 * It prints the actual type of the object pointed to by p: "A", "B" or "C".
 * @param p The Base Reference to be checked.
 */
void identify(Base& p);

#endif // EX02_BASE_HPP