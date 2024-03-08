// Created by tde-sous on 08-03-2024.

#include "whatever.hpp"
#include <iostream>

int main()
{
  whatever obj;
  int a = 60;
  int b = 6;
  std::cout << "BEFORE SWAP: a = " << a << " b = " << b << std::endl;
  obj.swap<int>(a, b);
  std::cout << "AFTER SWAP: a = " << a << " b = " << b << std::endl;

  float c = 60.6123123;
  float d = 6.01;
  std::cout << "BEFORE SWAP: c = " << c << " d = " << d << std::endl;
  obj.swap<float>(c, d);
  std::cout << "AFTER SWAP: c = " << c << " d = " << d << std::endl;

}