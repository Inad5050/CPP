#pragma once
#include <iostream>
#include <cstdlib> //std::rand(), std::srand()
#include <ctime> //std::time()
#include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
	private:
	std::string const	name = "Shrubbery AForm generic name";
	bool		is_it_signed = 0;
	int const	grade_to_sign = 72;
	int const	grade_to_execute = 45;
	std::string	target;

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string name);
		RobotomyRequestForm(RobotomyRequestForm& other);
		~RobotomyRequestForm();
		RobotomyRequestForm& 		operator=(RobotomyRequestForm& other);

		void	beExecuted();
};
