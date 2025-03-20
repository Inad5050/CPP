#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain class default constructor called" << std::endl;
}

Brain::Brain(Brain& other)
{
	std::cout << "Brain class copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
}

Brain::~Brain()
{
	std::cout << "Brain class destructor called" << std::endl;
}

Brain&	Brain::operator=(Brain& other)
{
	std::cout << "Brain class copy operator called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			ideas[i] = other.ideas[i];
	}
	return (*this);
}
