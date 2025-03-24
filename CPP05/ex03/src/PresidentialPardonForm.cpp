#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 25, 5), target("DefaultTarget")
{
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardonForm", 25, 5), target(target)
{
	std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& other): AForm("PresidentialPardonForm", 25, 5), target(other.target)
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm& 	PresidentialPardonForm::operator=(PresidentialPardonForm& other)
{
	std::cout << "PresidentialPardonForm copy operator called." << std::endl;
	if (this != &other)
		target = other.target;
	return (*this);
}

void	PresidentialPardonForm::beExecuted() const
{
	std::cout << "PresidentialPardonForm beExecuted() called" << std::endl;
	std::cout << target << " has been pardoned by Zaphod Beeblebrox!" << std::endl;
}

