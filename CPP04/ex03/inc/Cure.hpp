// Created by tde-sous on 01-02-2024.
#ifndef EX03_CURE_HPP
#define EX03_CURE_HPP

#include "AMateria.hpp"

class AMateria;

class Cure : public AMateria {
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
  /**
   * @brief Creates a new instance of this type
   * @return New instance of Cure.
   */
  AMateria *clone() const;
  /**
   * @brief Heals wounds at the target
   *  @param target The target of the Cure
   */
  void use(ICharacter &target);
};

#endif // EX03_CURE_HPP