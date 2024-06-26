// Created by tde-sous on 3/27/24.
#ifndef EX01_SPAN_HPP
#define EX01_SPAN_HPP

#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <ctime>

class Span {
private:
  unsigned int maxStorage_;
  std::vector<int> numberList_;
  /**
   * @brief Default constructor.
   */
  Span();

public:
  /**
   * @brief Constructor with param.
   * @param N maximum capacity of storage for
   */
  explicit Span(unsigned int N);
  /**
   * @brief Copy constructor.
   * @param other The other Span to copy.
   */
  Span(const Span &other);
  /**
   * @brief Copy assignment operator.
   * @param other The other Span to assign.
   * @return A reference to the assigned Span.
   */
  Span &operator=(const Span &other);
  /**
   * @brief Destructor.
   */
  ~Span();
  /**
   * @brief Add a single number to the span
   * @param number Number to be added to the span.
   */
  void addNumber(int number);
  /**
   * @brief Find the longest Span between all numbers stored.
   * @return The biggest distance between the number. Exception if no span is
   * found.
   */
  int longestSpan();
  /**
   * @brief Find the shortest Span between all numbers stored.
   * @return The shortest distance between the number. Exception if no span is
   * found.
   */
  int shortestSpan();
  /**
   * @brief Add a quantity of random numbers to the vector of Span.
   * @param quantity How many random numbers to be added.
   */
  void addRandomNumbers(unsigned int quantity);
  class maxCapacityException : public std::exception {
    const char *what() const throw();
  };
  class noSpanFound : public std::exception {
    const char *what() const throw();
  };
};

#endif // EX01_SPAN_HPP