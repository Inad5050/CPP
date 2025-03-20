#pragma once
#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
	private:
	std::string	target;

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string name);
		PresidentialPardonForm(PresidentialPardonForm& other);
		~PresidentialPardonForm();
		PresidentialPardonForm& 		operator=(PresidentialPardonForm& other);

		void	beExecuted() const;
};
