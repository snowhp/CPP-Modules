// Created by tde-sous on 4/8/24.
#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

template <typename Container> bool PmergeMe::isSorted(Container &cont) {
  typename Container::const_iterator it = cont.begin();

  int prev = *it;

  while (it != cont.end()) {
    it++;
    if (it == cont.end())
      break;
    if (*it < prev)
      return false;
  }
  return true;
}

template <typename Container> void PmergeMe::mergeContainer(Container &cont) {
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
  while (l < left.size())
    cont[i++] = left[l++];
  while (r < right.size())
    cont[i++] = right[r++];
}

void PmergeMe::sort() {
  clock_t tStart = clock();
  mergeContainer(vector_);
  if (isSorted(vector_))
    std::cout << "Time to process a range of 5 elements with std::[vector] : "
              << (double)(clock() - tStart) / CLOCKS_PER_SEC * 1000000 << " us"
              << std::endl;

  tStart = clock();
  mergeContainer(deque_);
  if (isSorted(deque_))
  std::cout << "Time to process a range of 5 elements with std::[deque] : "
            << (double)(clock() - tStart) / CLOCKS_PER_SEC * 1000000 << " us"
            << std::endl;
}

PmergeMe::PmergeMe(std::vector<int> list)
    : vector_(list), deque_(list.begin(), list.end()) {
  for (std::vector<int>::iterator it = vector_.begin(); it != vector_.end();
       it++) {
    std::vector<int>::iterator it_tmp = it;
    while (it_tmp != vector_.end()) {
      it_tmp++;
      if (it_tmp == vector_.end())
        break;
      if (it_tmp != vector_.end() && *it_tmp == *it) {
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
