#pragma once
#include <iostream>

class	Brain
{
	protected:
		std::string ideas[100];

	public:
		Brain();
		Brain(Brain& other);
		~Brain();
		Brain&	operator=(Brain& other);
};
