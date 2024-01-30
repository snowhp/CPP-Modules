// Created by tde-sous on 26-01-2024.
#ifndef ICE_HPP
#define ICE_HPP



class Ice {
public:
   /**
   * @brief Default constructor.
   */
    Ice();
   /**
   * @brief Copy constructor.
   * @param other The other Ice to copy.
   */
    Ice(const Ice& other);
   /**
   * @brief Copy assignment operator.
   * @param other The other Ice to assign.
   * @return A reference to the assigned Ice.
   */
    Ice& operator=(const Ice& other);
   /**
   * @brief Destructor.
   */
    ~Ice();
};



#endif //ICE_HPP