// Created by tde-sous on 4/8/24.
#ifndef EX01_RPN_HPP
#define EX01_RPN_HPP

#include <iostream>
#include <stack>
#include <algorithm>
#include <exception>

class RPN {
private:

  std::string input_;
  std::stack<float> list_;

  /**
   * @brief Default constructor.
   */
  RPN();

public:
  /**
   * @brief Constructor with input param.
   * @param input The input given by the user.
   */
  RPN(char *input);
  /**
   * @brief Copy constructor.
   * @param other The other RPN to copy.
   */
  RPN(const RPN &other);
  /**
   * @brief Copy assignment operator.
   * @param other The other RPN to assign.
   * @return A reference to the assigned RPN.
   */
  RPN &operator=(const RPN &other);
  /**
   * @brief Destructor.
   */
  ~RPN();

  class noDivisionByZero : public std::exception {
    const char *what() const throw();
  };

  class notEnoughNumbers : public std::exception {
    const char *what() const throw();
  };

  class notEnoughOperators : public std::exception {
    const char *what() const throw();
  };
};

#endif // EX01_RPN_HPP