// Created by tde-sous on 3/29/24.
#ifndef EX02_MUTANTSTACK_HPP
#define EX02_MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <vector>

template <typename T, typename C = std::deque<T> >
class MutantStack : public std::stack<T, C> {
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

  typedef typename C::iterator iterator;

  iterator begin();
  iterator end();
};

#include "MutantStack.tpp"

#endif // EX02_MUTANTSTACK_HPP