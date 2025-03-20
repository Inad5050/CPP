#include "Zombie.hpp"

Zombie::Zombie()
{};

Zombie::Zombie(std::string& name) : _name(name)
{};

Zombie::~Zombie() //destructors are called! automatically for objects in the stack (when a function finishes for example) or heap (when we use delete)
{
	std::cout << _name << " has been destroyed." << std::endl;
}
	
void	Zombie::announce()
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
