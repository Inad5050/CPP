#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern& other)
{
	std::cout << "Intern ccopy constructor called" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}

Intern& Intern::operator=(const Intern& other)
{
	std::cout << "Intern copy operator called" << std::endl;
	return (*this);
}

AForm*	Intern::makeForm(std::string form, std::string target)
{
	std::cout << "Intern makeForm() called" << std::endl;
	if (makeFormAux(form, "Presidential") || makeFormAux(form, "presidential") || makeFormAux(form, "Pardon") || makeFormAux(form, "pardon"))
	{
		std::cout << "Intern creates form:" << form << std::endl;
		AForm* newform = new PresidentialPardonForm(target);
		return (newform);
	}
	else if (makeFormAux(form, "Robotomy") || makeFormAux(form, "robotomy") || makeFormAux(form, "Request") || makeFormAux(form, "request"))
	{
		std::cout << "Intern creates form:" << form << std::endl;
		AForm* newform = new RobotomyRequestForm(target);
		return (newform);
	}
	else if (makeFormAux(form, "Shrubbery") || makeFormAux(form, "shrubbery") || makeFormAux(form, "Creation") || makeFormAux(form, "creation"))
	{
		std::cout << "Intern creates form:" << form << std::endl;
		AForm* newform = new ShrubberyCreationForm(target);
		return (newform);
	}
	std::cout << "Your intern is confused, he doesn't regonize " << form << std::endl;
	return (0);
}

bool	Intern::makeFormAux(std::string form, const char* keyWord)
{
	if (form.find(keyWord) != std::string::npos)
		return (true);
	else
		return (false);
}
