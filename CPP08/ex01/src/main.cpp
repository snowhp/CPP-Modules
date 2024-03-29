//
// Created by tde-sous on 3/20/24.
//

#include "Span.hpp"

int main() {
  Span obj(5);
  try {
    obj.addNumber(-1);
    obj.addNumber(-1);
    obj.addNumber(-1);
    obj.addNumber(-1);
    obj.addNumber(-1);
    std::cout << "Longest Span is = " << obj.longestSpan() << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
}