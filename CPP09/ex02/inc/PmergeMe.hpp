// Created by tde-sous on 4/8/24.
#ifndef EX02_PMERGEME_HPP
#define EX02_PMERGEME_HPP

class PmergeMe {
public:
  /**
   * @brief Default constructor.
   */
  PmergeMe();
  /**
   * @brief Copy constructor.
   * @param other The other PmergeMe to copy.
   */
  PmergeMe(const PmergeMe &other);
  /**
   * @brief Copy assignment operator.
   * @param other The other PmergeMe to assign.
   * @return A reference to the assigned PmergeMe.
   */
  PmergeMe &operator=(const PmergeMe &other);
  /**
   * @brief Destructor.
   */
  ~PmergeMe();
};

#endif // EX02_PMERGEME_HPP