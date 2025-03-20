#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	std::string	Galvatron = "Galvatron";
	FragTrap	Frag1(Galvatron);
	std::string	Megatron = "Megatron";

	Frag1.attack(Megatron);
	Frag1.takeDamage(8);
	Frag1.beRepaired(4);

	Frag1.attack(Megatron);
	Frag1.takeDamage(12);
	Frag1.beRepaired(4);
	Frag1.highFivesGuys();

	return (0);
}
