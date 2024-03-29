//
// Created by tde-sous on 3/20/24.
//

#include "Span.hpp"

int main() {
  Span obj(5);
  try {
    obj.addNumber(1);
    obj.addNumber(2);
    obj.addNumber(3);
    obj.addNumber(4);
    obj.addNumber(5);
    obj.addNumber(5);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
}