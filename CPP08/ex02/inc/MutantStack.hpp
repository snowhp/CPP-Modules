// Created by tde-sous on 3/29/24.
#ifndef EX02_MUTANTSTACK_HPP
#define EX02_MUTANTSTACK_HPP

class MutantStack {
public:
  /**
   * @brief Default constructor.
   */
  MutantStack();
  /**
   * @brief Copy constructor.
   * @param other The other MutantStack to copy.
   */
  MutantStack(const MutantStack &other);
  /**
   * @brief Copy assignment operator.
   * @param other The other MutantStack to assign.
   * @return A reference to the assigned MutantStack.
   */
  MutantStack &operator=(const MutantStack &other);
  /**
   * @brief Destructor.
   */
  ~MutantStack();
};

#include "MutantStack.tpp"

#endif // EX02_MUTANTSTACK_HPP