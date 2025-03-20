#pragma once
#include <iostream>
#include <cstdlib> //std::rand(), std::srand()
#include <ctime> //std::time()
#include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
	private:
	std::string	target;

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string name);
		RobotomyRequestForm(RobotomyRequestForm& other);
		~RobotomyRequestForm();
		RobotomyRequestForm& 		operator=(RobotomyRequestForm& other);

		void	beExecuted() const;
};
