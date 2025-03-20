#pragma once
#include <iostream>
#include "AMateria.hpp"

class	Ice: public AMateria
{
	public:
		Ice();
		Ice(std::string& type);
		Ice(Ice &other);
		~Ice();
		Ice& operator=(Ice& other);
		
		Ice* clone() const;
		void use(ICharacter& target);
};
