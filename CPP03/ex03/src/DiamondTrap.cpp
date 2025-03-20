#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(), FragTrap(), ScavTrap(), name("Default DiamondTrap name") //El compilador inicializa las clases base en el orden en que aparecen en la lista de herencia de la declaración de la clase derivada, no en el orden en que las coloques en la lista de inicialización de tu constructor.
{
	std::cout << "DiamondTrap default constructor called!" << std::endl;
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamage = 30;
}

DiamondTrap::DiamondTrap(std::string str): ClapTrap(str + "_clap_name"), FragTrap(), ScavTrap(), name(str)
{
	std::cout << "DiamondTrap constructor called!" << std::endl;
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other): ClapTrap(other.name + "_clap_name"), FragTrap(), ScavTrap(), name(other.name)
{
	std::cout << "DiamondTrap copy constructor called!" << std::endl;
	HitPoints = other.HitPoints;
	EnergyPoints = other.EnergyPoints;
	AttackDamage = other.AttackDamage;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called!" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& other)
{
	std::cout << "DiamondTrap copy operator called!" << std::endl;
	if (this != &other)
	{
		name = other.name;
		HitPoints = other.HitPoints;
		EnergyPoints = other.EnergyPoints;
		AttackDamage = other.AttackDamage;
	}
	return (*this);
}

void	DiamondTrap::WhoAmI()
{
	std::cout << "I am " << name << " son of " << ClapTrap::name << "!" << std::endl;
}

void	DiamondTrap::attack(const std::string& target)
{
	std::cout << "DiamondTrap attack called!" << std::endl;
	ScavTrap::attack(target);
}
