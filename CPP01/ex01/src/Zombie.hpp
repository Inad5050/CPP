#pragma once

#include <iostream>
#include <vector> //push_back (adds a new element at the end of the list), pop_back (deletes the last element), size (returns the vectors size), clear (clears the whole vector)
#include <string>

class Zombie
{
	private:
	std::string	_name;

	public:
	Zombie();
	Zombie(std::string& name);
	~Zombie();
	void	announce();
	void	change_name(std::string new_name);
};

Zombie*	newZombie(std::string& name);
void	randomChump(std::string& name);
Zombie*	zombieHorde(int N, std::string name);