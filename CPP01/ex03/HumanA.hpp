#pragma	once

#include <iostream>
#include "Weapon.hpp"

class	HumanA
{
	private:
	std::string	name;
	Weapon&		_weapon; //references must be initialized when they are created, and the must use referece an object which has the capacity to exists as long as they do (they cant reference a loval variable for example)
	HumanA(); //when the default constructor is private it can't be used to create this class (without arguments) and the compiler won't create a new default constructor

	public:
	HumanA(std::string	new_name, Weapon& weapon); 
	~HumanA();
	
	void	attack();
	void	setWeapon(Weapon& weaponName);
};
