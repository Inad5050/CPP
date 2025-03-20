#include "Weapon.hpp"

Weapon::Weapon() {};

Weapon::Weapon(std::string weaponName) : type(weaponName) {};

Weapon::~Weapon() {};

std::string const Weapon::getType() const
{
	return (Weapon::type);
}

void Weapon::setType(std::string newWeapon)
{
	Weapon::type = newWeapon;
}
