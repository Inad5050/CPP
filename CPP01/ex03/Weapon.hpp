#pragma	once

#include <iostream>

class	Weapon
{
	private:
	std::string	type;

	public:
	Weapon();
	Weapon(std::string weaponName);
	~Weapon();

	std::string const	getType() const;
	void				setType(std::string newWapon);
};