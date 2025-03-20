#pragma once
#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
	private:
	std::string const	name = "Shrubbery AForm generic name";
	bool		is_it_signed = 0;
	int const	grade_to_sign = 25;
	int const	grade_to_execute = 5;
	std::string	target;

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string name);
		PresidentialPardonForm(PresidentialPardonForm& other);
		~PresidentialPardonForm();
		PresidentialPardonForm& 		operator=(PresidentialPardonForm& other);

		void	beExecuted();
};
