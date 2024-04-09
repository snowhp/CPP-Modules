// Created by tde-sous on 4/8/24.
#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

template <typename Container> void PmergeMe::mergeContainer(Container &cont) {
  std::cout << "Started" << std::endl;
  if (cont.size() == 1)
    return;
  int middle = cont.size() / 2;
  Container left = Container(cont.begin(), cont.begin() + middle);
  Container right = Container(cont.begin() + middle, cont.end());
  mergeContainer(left);
  mergeContainer(right);
  sortContainer(cont, left, right);
}

template <typename Container>
void PmergeMe::sortContainer(Container &cont, Container &left,
                             Container &right) {
  size_t i = 0, l = 0, r = 0;
  while (l < left.size() && r < right.size()) {
    if (left[l] < right[r])
      cont[i++] = left[l++];
    else
      cont[i++] = right[r++];
  }
  while (left.size() > 0)
    cont[i++] = left[l++];
  while (right.size() > 0)
    cont[i++] = right[r++];
}

void PmergeMe::sort() {
  clock_t tStart = clock();
  mergeContainer(vector_);
  std::cout << "Time to process a range of 5 elements with std::[vector] : "
            << (double)(clock() - tStart) / CLOCKS_PER_SEC * 1000000 << " us"
            << std::endl;


  tStart = clock();
  mergeContainer(deque_);
  std::cout << "Time to process a range of 5 elements with std::[vector] : "
            << (double)(clock() - tStart) / CLOCKS_PER_SEC * 1000000 << " us"
            << std::endl;
}

PmergeMe::PmergeMe(std::vector<int> list)
    : vector_(list), deque_(list.begin(), list.end()) {
  for (std::vector<int>::iterator it = vector_.begin(); it != vector_.end();
       it++) {
    std::cout << *it << std::endl;
    std::vector<int>::iterator it_tmp = it;
    while (it_tmp != vector_.end()) {
      if (*it_tmp == *it && it_tmp != vector_.end()) {
        std::cout << "Error: Duplicated number detected: " << *it << std::endl;
        throw duplicatedNumbers();
      }
      it_tmp++;
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
