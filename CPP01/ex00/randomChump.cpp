#include "Zombie.hpp"

void	randomChump(std::string name) //creates the Zombie on to the stack, its destructor will be called when the function ends
{
	Zombie random_zombie(name);
	random_zombie.announce();
}
