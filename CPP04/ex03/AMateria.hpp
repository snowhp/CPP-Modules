// Created by tde-sous on 26-01-2024.
#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"
#include <string>
#include <iostream>

class AMateria {
protected:
  std::string type;

public:
  /**
   * @brief Default constructor.
   */
  AMateria(std::string const &type);
  /**
   * @brief Copy constructor.
   * @param other The other AMateria to copy.
   */
  AMateria(const AMateria &other);
  /**
   * @brief Copy assignment operator.
   * @param other The other AMateria to assign.
   * @return A reference to the assigned AMateria.
   */
  AMateria &operator=(const AMateria &other);
  /**
   * @brief Destructor.
   */
  ~AMateria();
  std::string const &getType() const; // Returns the materia type
  virtual AMateria *clone() const = 0;
  virtual void use(ICharacter &target);
};

#endif // AMATERIA_HPP