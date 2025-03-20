#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int	main(void)
{
	std::string	Galvatron = "Galvatron";
	ScavTrap	Scav1(Galvatron);
	std::string	Megatron = "Megatron";
	ClapTrap	Clap1(Galvatron);

	Scav1.attack(Megatron);
	Scav1.takeDamage(8);
	Scav1.beRepaired(4);

	Scav1.attack(Megatron);
	Scav1.takeDamage(12);
	Scav1.beRepaired(4);
	Scav1.guardGate();

	return (0);
}
