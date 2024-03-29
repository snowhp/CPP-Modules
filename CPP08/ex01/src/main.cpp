//
// Created by tde-sous on 3/20/24.
//

#include "Span.hpp"

int main() {
  Span obj(102);
  try {
    obj.addNumber(111);
    obj.addNumber(119);
    obj.addRandomNumbers(100);
    std::cout << "Longest Span is = " << obj.longestSpan() << std::endl;
    std::cout << "Shortest Span is = " << obj.shortestSpan() << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
}

/*
int main()
{
  Span sp = Span(5);
  sp.addNumber(6);
  sp.addNumber(3);
  sp.addNumber(17);
  sp.addNumber(9);
  sp.addNumber(11);
  std::cout << sp.shortestSpan() << std::endl;
  std::cout << sp.longestSpan() << std::endl;
  return 0;
}*/
