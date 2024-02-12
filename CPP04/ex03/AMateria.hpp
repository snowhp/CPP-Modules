// Created by tde-sous on 26-01-2024.
#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"
#include <iostream>
#include <string>

class ICharacter;

class AMateria {
protected:
  /* The Type of the AMateria */
  std::string type_;

public:
  /**
   * @brief Default constructor.
   */
  AMateria();
  /**
   * @brief Constructor for AMateria.
   * @param type The type of AMateria
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
  virtual ~AMateria();
  /**
   * @brief Getter for the type of Materia.
   * @return The type of the AMateria.
   */
  std::string const &getType() const;
  /**
   * @brief Pure virtual clone to be defined from derived classes.
   */
  virtual AMateria *clone() const = 0;
  /**
   * @brief Virtual function to be used by Ice and Cure classes it will enable
   * their special hability.
   * @param target The target of the use().
   */
  virtual void use(ICharacter &target);
};

#endif // AMATERIA_HPP