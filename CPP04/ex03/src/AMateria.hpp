#pragma once
#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string type;	
	
	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(AMateria& other);
		virtual ~AMateria();
		AMateria& operator=(AMateria& other);	

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0; // " = 0" means this is a pure virtual method, having one of these means this is a pure virtual class which cannot be directly intantiated, regardless of if its constructor is public, protected or private.
		virtual void use(ICharacter& target);
};
