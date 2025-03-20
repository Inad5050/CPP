#include "Zombie.hpp"

Zombie*	newZombie(std::string name) //allocates the zombie on the heap
{
	Zombie* new_zombie = new Zombie(name); //new assigns enough memory for an specific entity
	new_zombie->announce(); //with pointers to objects we must use ->.
	return (new_zombie);
}
