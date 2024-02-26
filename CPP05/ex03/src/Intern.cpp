// Created by tde-sous on 26-02-2024.
#include "Intern.hpp"


Intern::Intern() {
    std::cout << "[Intern] Default constructor called." << std::endl;
}

Intern::Intern(const Intern& other) {
    std::cout << "[Intern] Copy constructor called." << std::endl;
	(void) other;
}

Intern& Intern::operator=(const Intern& other) {
    std::cout << "[Intern] Copy assigment operator called." << std::endl;
	(void) other;
    return *this;
}

Intern::~Intern() {
    std::cout << "[Intern] Destructor called." << std::endl;
}

AForm *Intern::makeForm(const std::string &formName,
                  const std::string &formTargetName)
{
	std::string names[3] = {
	"PresidentialPardon",
	"RobotomyRequest",
	"ShrubberyCreation"
};
	int number = 0;
	while (number <= 3)
	{
		if (names[number] == formName)
			break;
		number++;
	}
	switch (number)
	{
		case 0: return (makePresidentialPardonForm(formTargetName));
		case 1: return (makeRobotomyRequestForm(formTargetName));
		case 2: return (makeShrubberyCreationForm(formTargetName));
		default: throw FormNotFound();
	}
}


AForm *Intern::makePresidentialPardonForm(const std::string &target)
{
	return (new PresidentialPardonForm(target));
}

AForm *Intern::makeRobotomyRequestForm(const std::string &target)
{
	return (new RobotomyRequestForm(target));
}

AForm *Intern::makeShrubberyCreationForm(const std::string &target)
{
	return (new ShrubberyCreationForm(target));
}

const char *Intern::FormNotFound::what() const throw() {
	return "Form not found.";
}

