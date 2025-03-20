#pragma	once

#include <iostream>
#include "Weapon.hpp"

class	HumanB
{
	private:
	std::string	name;
	Weapon*		_weapon;

	public:
	HumanB(std::string	new_name); 
	~HumanB();

	void	attack();
	void	setWeapon(Weapon& mew_weapon);
};
