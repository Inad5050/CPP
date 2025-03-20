#include "Animal.hpp"

Animal::Animal(): type("generic animal")
{
	std::cout << "Generic animal constructor called" << std::endl;
}

Animal::Animal(const std::string type): type(type)
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal& other): type(other.type)
{
	std::cout << "Copy animal constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal&	Animal::operator=(const Animal& other)
{
	std::cout << "Animal copy operator called" << std::endl;
	if (this != &other)
		type = other.type;
	return (*this);
}

const std::string&	Animal::getType(void) const
{
	return (type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal makeSound called: <<no noise>>!" << std::endl;
}