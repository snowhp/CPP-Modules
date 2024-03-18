// Created by tde-sous on 08-03-2024.
#ifndef ITER_HPP
#define ITER_HPP

#include <functional>

template <typename T>
void iter(T *arrayAddress, int arrayLength, void(*func)(T)) {
  for (int i = 0; i < arrayLength; i++)
    func(arrayAddress[i]);
}

#endif // ITER_HPP
