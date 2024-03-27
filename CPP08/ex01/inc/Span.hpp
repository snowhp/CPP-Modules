// Created by tde-sous on 3/27/24.
#ifndef EX01_SPAN_HPP
#define EX01_SPAN_HPP

#include <iostream>

class Span {
public:
  /**
   * @brief Default constructor.
   */
  Span();
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
};

#endif // EX01_SPAN_HPP