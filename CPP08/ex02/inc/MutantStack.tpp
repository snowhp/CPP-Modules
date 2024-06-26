// Created by tde-sous on 3/29/24.

#include "MutantStack.hpp"

template <typename T, typename C> MutantStack<T, C>::MutantStack() {
  std::cout << "Default constructor called!" << std::endl;
}

template <typename T, typename C>
MutantStack<T, C>::MutantStack(const MutantStack<T, C> &other) {
  std::cout << "Copy constructor called!" << std::endl;
  *this = other;
}

template <typename T, typename C>
MutantStack<T, C> &MutantStack<T, C>::operator=(const MutantStack &other) {
  std::cout << "Copy assignment operator called!" << std::endl;
  if (this == &other)
    return (*this);
  std::stack<T, C>::operator=(this, other);
  return (*this);
}

template <typename T, typename C> MutantStack<T, C>::~MutantStack() {
  std::cout << "Destructor called!" << std::endl;
}

template <typename T, typename C>
typename MutantStack<T, C>::iterator MutantStack<T, C>::begin() {
  return this->c.begin();
}

template<typename T, typename C>
typename MutantStack<T, C>::iterator MutantStack<T, C>::end() {
  return this->c.end();
}
