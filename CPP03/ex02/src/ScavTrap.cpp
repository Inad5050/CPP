#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap default constructor called!" << std::endl;
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string &str) : ClapTrap(str)
{
	std::cout << "ScavTrap constructor called!" << std::endl;
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamage = 20;
};

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap()
{
	std::cout << "ScavTrap copy constructor called!" << std::endl;
	name = other.name;
	HitPoints = other.HitPoints;
	EnergyPoints = other.EnergyPoints;
	AttackDamage = other.AttackDamage;
};

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called!" << std::endl;
};

ScavTrap&	ScavTrap::operator=(const ScavTrap& other)
{
	std::cout << "ScavTrap copy assignment operator called!" << std::endl;
	if (this != &other)
	{
		name = other.name;
		HitPoints = other.HitPoints;
		EnergyPoints = other.EnergyPoints;
		AttackDamage = other.AttackDamage;		
	}
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	if (checkStatus() != 0)
		return;
	std::cout << "ScavTrap " << name << " attacks " << target << " causing " << AttackDamage << " points of damage!" << std::endl;
	EnergyPoints -= 1;
};

void	ScavTrap::guardGate() const
{
	if (checkStatus() != 0)
		return;
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
