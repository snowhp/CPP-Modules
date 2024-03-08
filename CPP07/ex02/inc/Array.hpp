// Created by tde-sous on 08-03-2024.
#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <iostream>

template <class T> class Array {
private:
  T *array_;
  unsigned int size_;

public:
  /**
   * @brief Default constructor.
   */
  Array() : size_() {
    std::cout << "[Array] Default Constructor called!" << std::endl;
    this->array_ = new T[0];
    this->size_ = 0;
  };
  /**
   * @brief Constructor with array_ with n size.
   * @param n The size of the array to be allocated.
   */
  Array(unsigned int n) : size_(n) {
    std::cout << "[Array] Constructor called!" << std::endl;
    this->array_ = new T[n];
  };
  /**
   * @brief Copy constructor.
   * @param other The other Array to copy.
   */
  Array(const Array &other);
  /**
   * @brief Copy assignment operator.
   * @param other The other Array to assign.
   * @return A reference to the assigned Array.
   */
  Array &operator=(const Array &other);
  /**
   * @brief Destructor.
   */
  ~Array() { std::cout << "[Array] Destructor called!" << std::endl; };
  /**
   * @brief Get the size of the array.
   * @return The size of the array.
   */
  unsigned int size() const { return size_; };
  /**
   * @brief Overload of the operator [] to access the array.
   * @param i The value of the array to access.
   * @return The value in the array or exception OutOfRange() if i is bigger
   * than the index_.
   */
  T &operator[](unsigned int i) {
    if (i >= this->size())
      throw OutOfRange();
    return this->array_[i];
  };
  class OutOfRange : public std::exception {
    /** @brief Throws an exception indicating that the index is out of range. */
    const char *what() const throw() { return "Index is out of range."; }
  };
};

#endif // ARRAY_HPP