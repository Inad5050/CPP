#pragma once
#include <iostream>
#include "AMateria.hpp"

class	Cure: public AMateria
{
	public:
		Cure();
		Cure(std::string& type);
		Cure(Cure &other);
		~Cure();
		Cure& operator=(Cure& other);
		
		Cure* clone() const;
		void use(ICharacter& target);
};
