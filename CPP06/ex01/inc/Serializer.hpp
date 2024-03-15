// Created by tde-sous on 15-03-2024.
#ifndef EX01_SERIALIZER_HPP
#define EX01_SERIALIZER_HPP

class Serializer {
public:
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
};

#endif // EX01_SERIALIZER_HPP