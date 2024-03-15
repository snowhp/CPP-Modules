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

#endif // EX02_BASE_HPP