// Created by tde-sous on 08-03-2024.
#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <class T>
class Array {
private:
    T *array_;
public:
   /**
   * @brief Default constructor.
   */
    Array()
    {
     std::cout << "[Array] destructor called!" << std::endl;
     array_ = new T[0];
    }
   /**
     * @brief Constructor with array_ with n size.
    * @param n The size of the array to be allocated.
    */
   Array(unsigned int n)
   {
      array_ = new T[n];
   }
   /**
   * @brief Copy constructor.
   * @param other The other Array to copy.
   */
    Array(const Array& other);
   /**
   * @brief Copy assignment operator.
   * @param other The other Array to assign.
   * @return A reference to the assigned Array.
   */
    Array& operator=(const Array& other);
   /**
   * @brief Destructor.
   */
    ~Array()
   {
     std::cout << "[Array] destructor called!" << std::endl;
    }
};



#endif //ARRAY_HPP