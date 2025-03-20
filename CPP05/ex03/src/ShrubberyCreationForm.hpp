#pragma once
#include <iostream>
#include "AForm.hpp"

class ShrubberyCreationForm: public AForm
{
	private:
	std::string	target;

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string name);
		ShrubberyCreationForm(ShrubberyCreationForm& other);
		~ShrubberyCreationForm();
		ShrubberyCreationForm& 		operator=(ShrubberyCreationForm& other);

		void	beExecuted() const;
};
