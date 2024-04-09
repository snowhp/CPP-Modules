// Created by tde-sous on 4/8/24.
#ifndef EX02_PMERGEME_HPP
#define EX02_PMERGEME_HPP

#include <iostream>
#include <cstdlib>
#include <limits>
#include <deque>
#include <vector>
#include <exception>
#include <ctime>

class PmergeMe {
private:
  /**
   * @brief Default constructor.
   */
  PmergeMe();
  template<typename Container> static bool isSorted(Container & cont);
  /**
   *
   * @brief Merge containers.
   * @tparam Container Type of the container.
   * @param cont Container to be sorted.
   */
  template<typename Container> void mergeContainer(Container & cont);
  /**
   *
   * @tparam Container Type of the container.
   * @param cont Container to be sorted.
   * @param left Left branch of the container.
   * @param right  Right branch of the container.
   */
  template<typename Container> void sortContainer(Container & cont, Container & left, Container & right);

  std::vector<int> vector_;
  std::deque<int> deque_;

public:
  void sort();
  /**
   * @brief Constructor with the stack.
   * @param list The stack to be sorted.
   */
  explicit PmergeMe(std::vector<int> list);
  /**
   * @brief Copy constructor.
   * @param other The other PmergeMe to copy.
   */
  PmergeMe(const PmergeMe &other);
  /**
   * @brief Copy assignment operator.
   * @param other The other PmergeMe to assign.
   * @return A reference to the assigned PmergeMe.
   */
  PmergeMe &operator=(const PmergeMe &other);
  /**
   * @brief Destructor.
   */
  ~PmergeMe();

  class duplicatedNumbers : public std::exception {
    const char *what() const throw();
  };
};

#endif // EX02_PMERGEME_HPP