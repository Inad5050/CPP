#pragma once
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
	private:
	std::string	name;

	public:	
	DiamondTrap();
	DiamondTrap(std::string str);
	DiamondTrap(const DiamondTrap& other);
	~DiamondTrap();
	DiamondTrap&	operator=(const DiamondTrap& other);

	void	WhoAmI();
	void	attack(const std::string& target);
};