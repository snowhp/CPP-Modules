// Created by tde-sous on 26-01-2024.
#ifndef CUBE_HPP
#define CUBE_HPP



class Cube {
public:
   /**
   * @brief Default constructor.
   */
    Cube();
   /**
   * @brief Copy constructor.
   * @param other The other Cube to copy.
   */
    Cube(const Cube& other);
   /**
   * @brief Copy assignment operator.
   * @param other The other Cube to assign.
   * @return A reference to the assigned Cube.
   */
    Cube& operator=(const Cube& other);
   /**
   * @brief Destructor.
   */
    ~Cube();
};



#endif //CUBE_HPP