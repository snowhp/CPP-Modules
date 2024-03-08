// Created by tde-sous on 08-03-2024.

#include "Array.hpp"
#include <iostream>

int main() {
  try {
    char letter = 'a';
    Array<char> obj(10);
    for (int i = 0; i <= 10; i++) {
      obj[i] = letter++;
      std::cout << "Index " << i << " = " << obj[i] << std::endl;
    }
    obj[8] = 'a';
    std::cout << obj[8] << std::endl;
    std::cout << "Size of the object is " << obj.size() << std::endl;
  } catch (const std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  try {
    const int size = 10;
    Array<int> obj(size);
    for (int i = 0; i < size; i++) {
      obj[i] = i;
      std::cout << "Index " << i << " = " << obj[i] << std::endl;
    }
  } catch (const std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  try {
    Array<int> obj;
      obj[0] = 5;
      std::cout << obj[0] << std::endl;
  } catch (const std::exception &e) {
    std::cout << e.what() << std::endl;
  }
}