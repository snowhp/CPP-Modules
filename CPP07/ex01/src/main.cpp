// Created by tde-sous on 08-03-2024.

#include "iter.hpp"
#include <iostream>
#include <string>

void ft_addOneChar(char c) {
  std::cout << c << std::endl;
}

int main() {
  std::string str = "ola julio";
  char *copy = (char *)str.c_str();
  ::iter<char>(&copy[0], str.size(),
               ft_addOneChar); // Remove the "&" before ft_addOneChar
  return 0;
}