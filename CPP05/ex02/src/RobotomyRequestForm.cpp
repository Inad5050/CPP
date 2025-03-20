#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): target("Default target")
{
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): target(target)
{
	std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& other): target(other.target)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm& 		RobotomyRequestForm::operator=(RobotomyRequestForm& other)
{
	std::cout << "RobotomyRequestForm copy operator called. Only is_it_signed and target will be copied!" << std::endl;
	if (this != &other)
	{
		is_it_signed = other.is_it_signed;
		target = other.target;
	}
	return (*this);
}

void	RobotomyRequestForm::beExecuted()
{
	std::cout << "RobotomyRequestForm beExecuted() called" << std::endl;
	std::cout << "Drilling noises: GRRRRRRRRMMMMMMMMMMMMM!!" << std::endl;
	std::srand(std::time(0));
	if (std::rand() % 2 == 0)
		std::cout << target << " has been robotomized successfully! We will make an excelent bureaucrat" << std::endl;
	else
		std::cout << target << "Robotomy failed on " << target << "! OH no! Anyways" << std::endl;
}