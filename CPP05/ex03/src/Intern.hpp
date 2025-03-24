#pragma once
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(std::string arg);
		Intern(const Intern& other);
		~Intern();
		Intern& operator=(const Intern& other);

		AForm*	makeForm(std::string form, std::string target);

		class	InternNoFormFound: public std::exception
		{
			public:
				const char* what() const throw();
		};

	private:
		bool	makeFormAux(std::string form, const char* keyWord);
};