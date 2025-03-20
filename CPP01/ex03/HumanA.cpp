#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA(std::string new_name, Weapon& weapon): name(new_name), _weapon(weapon) {}

HumanA::~HumanA() {}

void	HumanA::attack()
{
	std::cout << HumanA::name << " attacks with their " << HumanA::_weapon.getType() << std::endl;
}

void	HumanA::setWeapon(Weapon& new_weapon)
{
	_weapon = new_weapon;
}
