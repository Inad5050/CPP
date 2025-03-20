#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("DefaultName", 72, 45), target("DefaultTarget")
{
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("DefaultName", 72, 45), target(target)
{
	std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& other): AForm("DefaultName", 72, 45), target(other.target)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm& 		RobotomyRequestForm::operator=(RobotomyRequestForm& other)
{
	std::cout << "RobotomyRequestForm copy operator called." << std::endl;
	if (this != &other)
		target = other.target;
	return (*this);
}

void	RobotomyRequestForm::beExecuted() const
{
	std::cout << "RobotomyRequestForm beExecuted() called" << std::endl;
	std::cout << "Drilling noises: GRRRRRRRRMMMMMMMMMMMMM!!" << std::endl;
	std::srand(std::time(0));
	if (std::rand() % 2 == 0)
		std::cout << target << " has been robotomized successfully! They will make an excelent bureaucrat" << std::endl;
	else
		std::cout << target << "Robotomy failed on " << target << "! OH no! Anyways..." << std::endl;
}