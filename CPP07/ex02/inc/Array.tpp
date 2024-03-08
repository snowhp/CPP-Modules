// Created by tde-sous on 08-03-2024.

#include "Array.hpp"

template <class T> Array<T>::Array() : size_() {
  std::cout << "[Array] Default Constructor called!" << std::endl;
  this->array_ = new T[0];
  this->size_ = 0;
};

template <class T> Array<T>::Array(unsigned int n) : size_(n) {
  std::cout << "[Array] Constructor called!" << std::endl;
  this->array_ = new T[n];
};

template <class T> Array<T>::Array(const Array &other) {
  this->array_ = new T[other.size()];
  for (unsigned int i = 0; i < other.size(); i++)
    this->array_[i] = other.array_[i];
  this->size_ = other.size_;
}

template <class T> Array<T> &Array<T>::operator=(const Array &other) {
  if (this == &other)
    return *this;
  delete[] this->array_;
  this->array_ = new T[other.size()];
  for (unsigned int i = 0; i < other.size(); i++)
    this->array_[i] = other.array_[i];
  this->size_ = other.size_;
  return *this;
}

template <class T> Array<T>::~Array() {
  delete[] this->array_;
  std::cout << "[Array] Destructor called!" << std::endl;
};

template <class T> unsigned int Array<T>::size() const { return size_; };

template <class T> T &Array<T>::operator[](unsigned int i) {
  if (i >= this->size())
    throw OutOfRange();
  return this->array_[i];
};

template <class T> const char *Array<T>::OutOfRange::what() const throw() {
  return "Index is out of range.";
}
