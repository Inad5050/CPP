#include "Zombie.hpp"

Zombie::Zombie(): _name("Default name")
{
	std::cout << "Default Zombie constructor called" << std::endl;
};

Zombie::Zombie(std::string& name): _name(name) 
{
	std::cout << "Zombie constructor called. Name: " << name << "." << std::endl;
};

Zombie::~Zombie() //destructors are called automatically for objects in the stack (when a function finishes for example) or heap (when we use delete)
{
	std::cout << _name << " has been destroyed." << std::endl;
}
	
void	Zombie::announce()
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::change_name(std::string new_name)
{
	std::cout << _name << "Zombie change_name() called" << std::endl;
	_name = new_name;
}