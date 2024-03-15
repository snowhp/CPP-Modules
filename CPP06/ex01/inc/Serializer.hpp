// Created by tde-sous on 15-03-2024.
#ifndef EX01_SERIALIZER_HPP
#define EX01_SERIALIZER_HPP

#include "Data.hpp"
#include <stdint.h>

class Serializer {
private:
  /**
   * @brief Default constructor.
   */
  Serializer();
  /**
   * @brief Copy constructor.
   * @param other The other Serializer to copy.
   */
  Serializer(const Serializer &other);
  /**
   * @brief Copy assignment operator.
   * @param other The other Serializer to assign.
   * @return A reference to the assigned Serializer.
   */
  Serializer &operator=(const Serializer &other);
  /**
   * @brief Destructor.
   */
  ~Serializer();

public:
  /**
   * @brief Converts a data pointer to the unsigned integer type uintptr_t.
   * @param ptr The Data struct to be converted.
   * @return Converted Data pointer to uintptr_t.
   */
  static uintptr_t serialize(Data *ptr);
  /**
   * Convertes a uintptr_t to Data pointer.
   * @param raw The uintptr_t to be converted.
   * @return Converted Data pointer.
   */
  static Data *deserialize(uintptr_t raw);
};

#endif // EX01_SERIALIZER_HPP