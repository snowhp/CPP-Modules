// Created by tde-sous on 01-02-2024.
#ifndef EX03_CHARACTER_HPP
#define EX03_CHARACTER_HPP

#include "ICharacter.hpp"

#define SLOTS 4

class ICharacter;
class AMateria;

class Character : public ICharacter {
private:
  std::string name_;
  AMateria *inventory_[SLOTS];

public:
  /**
   * @brief Default constructor.
   */
  Character(std::string const &name);
  /**
   * @brief Copy constructor.
   * @param other The other Character to copy.
   */
  Character(const Character &other);
  /**
   * @brief Copy assignment operator.
   * @param other The other Character to assign.
   * @return A reference to the assigned Character.
   */
  Character &operator=(const Character &other);
  /**
   * @brief Destructor.
   */
  ~Character();
  const std::string &getName() const;
  void equip(AMateria *m);
};

#endif // EX03_CHARACTER_HPP