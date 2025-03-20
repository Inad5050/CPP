#pragma once
#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class Character: public ICharacter
{
	private:
		std::string name;
		AMateria* inventory[4];

	public:
		Character();
		Character(std::string name);
		Character(Character& other);
		~Character();
		Character& operator=(Character& other);
		
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};
