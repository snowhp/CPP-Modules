// Created by tde-sous on 21-01-2024.
#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain {
private:
 std::string* ideas;
public:
   /**
   * @brief Default constructor.
   */
    Brain();
   /**
   * @brief Copy constructor.
   * @param other The other Brain to copy.
   */
    Brain(const Brain& other);
   /**
   * @brief Copy assignment operator.
   * @param other The other Brain to assign.
   * @return A reference to the assigned Brain.
   */
    Brain& operator=(const Brain& other);
   /**
   * @brief Destructor.
   */
    ~Brain();
};



#endif //BRAIN_HPP