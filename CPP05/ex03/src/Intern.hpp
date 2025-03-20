#pragma once
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern();
		~Intern();
		AForm*	makeForm(std::string form, std::string target);
		Intern& operator=(const Intern& other);
	
	private:
		bool	makeFormAux(std::string form, const char* keyWord);
};