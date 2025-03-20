#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << "Generic dog constructor called" << std::endl;
	dog_brain = new Brain();
}

Dog::Dog(const Dog& other): Animal(other.type)
{
	std::cout << "Copy dog constructor called" << std::endl;
	dog_brain = new Brain(*other.dog_brain);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete dog_brain;
}

Dog&	Dog::operator=(const Dog& other)
{
	std::cout << "Dog copy operator called" << std::endl;
	if (this != &other)
	{
		Animal::operator=(other);
		delete dog_brain;
		dog_brain = new Brain(*other.dog_brain); //it creates a copy of the original Brain class and a new pointer to it
	}
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog makeSound called: GUAUUU!" << std::endl;
}
