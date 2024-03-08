// Created by tde-sous on 08-03-2024.
#ifndef ITER_HPP
#define ITER_HPP

#include <functional>

template <typename T>
void iter(T *arrayAddress, int arrayLength, void(*func)(T)) {
  while(arrayLength > 0)
    func(arrayAddress[--arrayLength]);
}

#endif // ITER_HPP
