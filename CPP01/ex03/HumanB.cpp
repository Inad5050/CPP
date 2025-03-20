#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(std::string	new_name) : name(new_name), _weapon(NULL) {}; 

HumanB::~HumanB() {};

void	HumanB::attack()
{
	std::cout << HumanB::name << " attacks with their " << HumanB::_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& new_weapon)
{
	this->_weapon = &new_weapon;
}
