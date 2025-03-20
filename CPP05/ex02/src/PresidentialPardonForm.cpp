#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): target("Default target")
{
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): target(target)
{
	std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& other): target(other.target)
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm& 	PresidentialPardonForm::operator=(PresidentialPardonForm& other)
{
	std::cout << "PresidentialPardonForm copy operator called. Only is_it_signed and target will be copied!" << std::endl;
	if (this != &other)
	{
		is_it_signed = other.is_it_signed;
		target = other.target;
	}
	return (*this);
}
void	PresidentialPardonForm::beExecuted()
{
	std::cout << "PresidentialPardonForm beExecuted() called" << std::endl;
	std::cout << target << " has been pardoned by Zaphod Beeblebrox!" << std::endl;
}

