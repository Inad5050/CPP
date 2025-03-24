#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(std::string arg)
{
	std::cout << "Intern constructor called" << std::endl;
	static_cast<void>(arg);
}

Intern::Intern(const Intern& other)
{
	std::cout << "Intern copy constructor called" << std::endl;
	static_cast<void>(other);
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}

Intern& Intern::operator=(const Intern& other)
{
	std::cout << "Intern copy operator called" << std::endl;
	static_cast<void>(other);
	return (*this);
}

const char*	Intern::InternNoFormFound::what() const throw()
{
	return ("No form found. Closing");
}

AForm*	Intern::makeForm(std::string form, std::string target)
{
	std::cout << "Intern makeForm() called: \"" << form << "\"" << std::endl;

	int		index = 0 + \
	1 * (makeFormAux(form, "Presidential") || makeFormAux(form, "presidential") || makeFormAux(form, "Pardon") || makeFormAux(form, "pardon")) + \
	2 * (makeFormAux(form, "Robotomy") || makeFormAux(form, "robotomy") || makeFormAux(form, "Request") || makeFormAux(form, "request")) + \
	3 * (makeFormAux(form, "Shrubber") || makeFormAux(form, "shrubber") || makeFormAux(form, "Creation") || makeFormAux(form, "creation"));

	switch (index)
	{
		case 1:
			std::cout << "Intern creates form: PresidentialPardonForm" << std::endl;
			return (new PresidentialPardonForm(target));
		case 2:
			std::cout << "Intern creates form: RobotomyRequestForm" << std::endl;
			return (new RobotomyRequestForm(target));
		case 3:
			std::cout << "Intern creates form: ShrubberyCreationForm" << std::endl;
			return (new ShrubberyCreationForm(target));
		default:
			std::cout << "Your intern is confused, he doesn't recognize: " << form << std::endl;
			throw Intern::InternNoFormFound();
			return (NULL);
	}
}

bool	Intern::makeFormAux(std::string form, const char* keyWord)
{
	if (form.find(keyWord) != std::string::npos)
		return (true);
	else
		return (false);
}
