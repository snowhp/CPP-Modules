// Created by tde-sous on 26-02-2024.
#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class AForm;

class PresidentialPardonForm : public AForm {
private:
  /* The name of the target */
  std::string target_;

public:
  /**
   * @brief Default constructor.
   */
  PresidentialPardonForm();
  /**
   * @brief Constructor with target name.
   * @param target The name of the target.
   */
  explicit PresidentialPardonForm(const std::string &target);
  /**
   * @brief Copy constructor.
   * @param other The other PresidentialPardonForm to copy.
   */
  PresidentialPardonForm(const PresidentialPardonForm &other);
  /**
   * @brief Copy assignment operator.
   * @param other The other PresidentialPardonForm to assign.
   * @return A reference to the assigned PresidentialPardonForm.
   */
  PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
  /**
   * @brief Destructor.
   */
  ~PresidentialPardonForm();
  /**
   * @brief Prints to std::cout -> Informs that <target> has been pardoned by
   * Zaphod Beeblebrox.
   */
  void executer() const;
};

#endif // PRESIDENTIALPARDONFORM_HPP