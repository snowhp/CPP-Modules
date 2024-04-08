// Created by tde-sous on 4/8/24.
#ifndef EX01_RPN_HPP
#define EX01_RPN_HPP

class RPN {
public:
  /**
   * @brief Default constructor.
   */
  RPN();
  /**
   * @brief Copy constructor.
   * @param other The other RPN to copy.
   */
  RPN(const RPN &other);
  /**
   * @brief Copy assignment operator.
   * @param other The other RPN to assign.
   * @return A reference to the assigned RPN.
   */
  RPN &operator=(const RPN &other);
  /**
   * @brief Destructor.
   */
  ~RPN();
};

#endif // EX01_RPN_HPP