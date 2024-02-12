// Created by tde-sous on 01-02-2024.
#ifndef EX03_CHARACTER_HPP
#define EX03_CHARACTER_HPP

#include "ICharacter.hpp"
#include <list>

#define SLOTS 4

class ICharacter;
class AMateria;

class Character : public ICharacter {
private:
  /* The Name of the Character */
  std::string name_;
  /* The Inventory of the Character with a number of SLOTS */
  AMateria *inventory_[SLOTS];
  /* The List of unequiped Materias */
  std::list<AMateria *> unequipedMaterias_;

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
  /**
   * @brief Getter for the name of the Character.
   * @return The name of the Character.
   */
  const std::string &getName() const;
  /**
   * @brief Equips a AMateria in the inventory.
   * @param m The AMateria to equip.
   */
  void equip(AMateria *m);
  /**
   * @brief Unequips a AMateria in the inventory.
   * @param idx The index of the inventory to unequip.
   */
  void unequip(int idx);
  /**
   * @brief Use the AMateria at the slot[idx] and pass the target param to the
   * AMateria::use.
   * @param idx The index of the inventory to use.
   * @param target Target to be passed to AMateria::use.
   */
  void use(int idx, ICharacter &target);
};

#endif // EX03_CHARACTER_HPP