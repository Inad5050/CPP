#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << "Generic dog constructor called" << std::endl;
}

Dog::Dog(const Dog& other): Animal(other.type)
{
	std::cout << "Copy dog constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog&	Dog::operator=(const Dog& other)
{
	std::cout << "Dog copy operator called" << std::endl;
	if (this != &other)
		Animal::operator=(other);
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog makeSound called: GUAUUU!" << std::endl;
}
