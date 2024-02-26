// Created by tde-sous on 26-02-2024.
#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP



class PresidentialPardonForm {
public:
   /**
   * @brief Default constructor.
   */
    PresidentialPardonForm();
   /**
   * @brief Copy constructor.
   * @param other The other PresidentialPardonForm to copy.
   */
    PresidentialPardonForm(const PresidentialPardonForm& other);
   /**
   * @brief Copy assignment operator.
   * @param other The other PresidentialPardonForm to assign.
   * @return A reference to the assigned PresidentialPardonForm.
   */
    PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
   /**
   * @brief Destructor.
   */
    ~PresidentialPardonForm();
};



#endif //PRESIDENTIALPARDONFORM_HPP