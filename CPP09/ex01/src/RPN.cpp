// Created by tde-sous on 4/8/24.
#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(char *input) : input_(input) {
  float a;
  float b;

  for (size_t i = 0; i < input_.size(); i++) {

    if (isdigit(input_[i]))
      this->list_.push(std::strtof(&input_[i], NULL));
    else if (input_.find_first_of("+/*-", i) == i) {
      if (this->list_.size() < 2)
        throw notEnoughNumbers();
      b = list_.top();
      list_.pop();
      a = list_.top();
      list_.pop();
      if (input_[i] == '+')
        list_.push(a + b);
      else if (input_[i] == '-')
        list_.push(a - b);
      else if (input_[i] == '/') {
        if (b == 0)
          throw noDivisionByZero();
        list_.push(a / b);
      } else if (input_[i] == '*')
        list_.push(a * b);
    }
  }
  if (list_.size() != 1)
    throw notEnoughOperators();
  std::cout << "Result is: " << list_.top() << std::endl;
}

RPN::RPN(const RPN &other) { (void)other; }

RPN &RPN::operator=(const RPN &other) {
  (void)other;
  return *this;
}

RPN::~RPN() {}

const char *RPN::noDivisionByZero::what() const throw() {
  return "Can't divide by zero.";
}

const char *RPN::notEnoughNumbers::what() const throw() {
  return "Not enough number to perform operation";
}

const char *RPN::notEnoughOperators::what() const throw() {
  return "Not enough operators to perform operation.";
}
