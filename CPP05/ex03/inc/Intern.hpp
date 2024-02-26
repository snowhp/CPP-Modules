// Created by tde-sous on 26-02-2024.
#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include <iostream>

class Intern {
public:
   /**
   * @brief Default constructor.
   */
    Intern();
   /**
   * @brief Copy constructor.
   * @param other The other Intern to copy.
   */
    Intern(const Intern& other);
   /**
   * @brief Copy assignment operator.
   * @param other The other Intern to assign.
   * @return A reference to the assigned Intern.
   */
    Intern& operator=(const Intern& other);
   /**
   * @brief Destructor.
   */
    ~Intern();
};



#endif //INTERN_HPP