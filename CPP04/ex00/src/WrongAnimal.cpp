#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("generic WrongAnimal")
{
	std::cout << "Generic WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string type): type(type)
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other): type(other.type)
{
	std::cout << "Copy WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout << "WrongAnimal copy operator called" << std::endl;
	if (this != &other)
		type = other.type;
	return (*this);
}

const std::string&	WrongAnimal::getType(void) const
{
	return (type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal makeSound called: <<no noise>>!" << std::endl;
}