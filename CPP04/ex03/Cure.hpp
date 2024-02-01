// Created by tde-sous on 01-02-2024.
#ifndef EX03_CURE_HPP
#define EX03_CURE_HPP

class Cure {
public:
  /**
   * @brief Default constructor.
   */
  Cure();
  /**
   * @brief Copy constructor.
   * @param other The other Cure to copy.
   */
  Cure(const Cure &other);
  /**
   * @brief Copy assignment operator.
   * @param other The other Cure to assign.
   * @return A reference to the assigned Cure.
   */
  Cure &operator=(const Cure &other);
  /**
   * @brief Destructor.
   */
  ~Cure();
};

#endif // EX03_CURE_HPP