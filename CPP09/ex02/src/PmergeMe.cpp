// Created by tde-sous on 4/8/24.
#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(std::vector<int> list)
    : vector_(list), deque_(list.begin(), list.end()) {

  for (std::vector<int>::iterator it = vector_.begin(); it != vector_.end();
       it++) {
    std::vector<int>::iterator it_tmp = it;
    while (it_tmp != vector_.end()) {
      it_tmp++;
      if (*it_tmp == *it) {
        std::cout << "Error: Duplicated number detected: " << *it << std::endl;
        throw duplicatedNumbers();
      }
    }
  }
}

PmergeMe::PmergeMe(const PmergeMe &other)
    : vector_(other.vector_.begin(), other.vector_.end()),
      deque_(other.deque_.begin(), other.deque_.end()) {}

PmergeMe &PmergeMe::operator=(const PmergeMe &other) {
  if (this != &other) {
    this->vector_ = other.vector_;
    this->deque_ = other.deque_;
  }
  return *this;
}

PmergeMe::~PmergeMe() {}

const char *PmergeMe::duplicatedNumbers::what() const throw() {
  return "Duplicated Number exception throw.";
}
