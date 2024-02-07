// Created by tde-sous on 07-02-2024.
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>

class Bureaucrat {
private:
  std::string const name;
  unsigned int grade;

public:
  /**
   * @brief Default constructor.
   */
  Bureaucrat();
  /**
   * @brief Default constructor.
   * @param name Name of the Bureaucrat
   */
  Bureaucrat(std::string const &name);
  /**
   * @brief Copy constructor.
   * @param other The other Bureaucrat to copy.
   */
  Bureaucrat(const Bureaucrat &other);
  /**
   * @brief Copy assignment operator.
   * @param other The other Bureaucrat to assign.
   * @return A reference to the assigned Bureaucrat.
   */
  Bureaucrat &operator=(const Bureaucrat &other);
  /**
   * @brief Destructor.
   */
  ~Bureaucrat();
};

#endif // BUREAUCRAT_HPP