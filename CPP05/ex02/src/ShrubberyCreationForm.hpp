#pragma once
#include <iostream>
#include "AForm.hpp"

class ShrubberyCreationForm: public AForm
{
	private:
	std::string const	name = "Shrubbery AForm generic name";
	bool		is_it_signed = 0;
	int const	grade_to_sign = 145;
	int const	grade_to_execute = 137;
	std::string	target;

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string name);
		ShrubberyCreationForm(ShrubberyCreationForm& other);
		~ShrubberyCreationForm();
		ShrubberyCreationForm& 		operator=(ShrubberyCreationForm& other);

		void	beExecuted();
};
