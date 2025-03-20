#include "ClapTrap.hpp"

int	main(void)
{
	std::string	Galvatron = "Galvatron";
	ClapTrap	Clap1(Galvatron);
	std::string	Megatron = "Megatron";

	Clap1.attack(Megatron);
	Clap1.takeDamage(8);
	Clap1.beRepaired(4);

	for (int i = 0; i < 10; i++)
		Clap1.attack(Megatron);
	return (0);
}
