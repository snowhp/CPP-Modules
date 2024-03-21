//
// Created by tde-sous on 3/20/24.
//

#ifndef EX00_EASYFIND_HPP
#define EX00_EASYFIND_HPP

#include <algorithm>
#include <exception>
#include <iostream>
#include <vector>

template <typename T> void easyfind(T container, int toBeFound);

class ValueNotFound : public std::exception {
  virtual const char *what() const throw();
};
#include "easyfind.tpp"
#endif // EX00_EASYFIND_HPP
