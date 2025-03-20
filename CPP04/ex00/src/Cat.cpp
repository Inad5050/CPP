#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "Generic cat constructor called" << std::endl;
}

Cat::Cat(const Cat& other): Animal(other.type)
{
	std::cout << "Copy cat constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat&	Cat::operator=(const Cat& other)
{
	std::cout << "Cat copy operator called" << std::endl;
	if (this != &other)
		Animal::operator=(other);
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat makeSound called: MIAAAU!" << std::endl;
}
