#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("DefaultTrap"), HitPoints(10), EnergyPoints(10), AttackDamage(0) 
{
	std::cout << "ClapTrap default constructor called!" << std::endl;
};

ClapTrap::ClapTrap(std::string std): name(std), HitPoints(10), EnergyPoints(10), AttackDamage(0) 
{
	std::cout << "ClapTrap constructor called!" << std::endl;
};

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "ClapTrap copy constructor called!" << std::endl;
	name = other.name;
	HitPoints = other.HitPoints;
	EnergyPoints = other.EnergyPoints;
	AttackDamage = other.AttackDamage;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "ClapTrap copy assignment operator called!" << std::endl;
	if (this != &other)
	{
		name = other.name;
		HitPoints = other.HitPoints;
		EnergyPoints = other.EnergyPoints;
		AttackDamage = other.AttackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called!" << std::endl;
};

void	ClapTrap::attack(const std::string& target)
{
	if (checkStatus() != 0)
		return;
	std::cout << "ClapTrap " << name << " attacks " << target << " causing " << AttackDamage << " points of damage!" << std::endl;
	EnergyPoints -= 1;
};

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (checkStatus() != 0)
		return;
	std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
	EnergyPoints -= 1;
	HitPoints -= amount;
};

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (checkStatus() != 0)
		return;
	std::cout << "ClapTrap " << name << " heals " << amount << " points of damage!" << std::endl;
	EnergyPoints -= 1;
	HitPoints += amount;
};

int ClapTrap::checkStatus() const
{
	if (HitPoints <= 0)
	{
		std::cout << "ClapTrap HitPoints depleted, " << name << " is out of commision!" << std::endl;
		return (1);
	}
	if (EnergyPoints <= 0)
	{
		std::cout << "ClapTrap EnergyPoints depleted, " << name << " is out of commision!" << std::endl;
		return (1);
	}
	return (0); 
};
