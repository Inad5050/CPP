#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "Generic cat constructor called" << std::endl;
	cat_brain = new Brain();
}

Cat::Cat(const Cat& other): Animal(other.type)
{
	std::cout << "Copy cat constructor called" << std::endl;
	cat_brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete cat_brain;
}

Cat&	Cat::operator=(const Cat& other)
{
	std::cout << "Cat copy operator called" << std::endl;
	if (this != &other)
	{
		Animal::operator=(other);
		delete cat_brain;
		cat_brain = new Brain(*other.cat_brain); //it creates a copy of the original Brain class and a new pointer to it
	}
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat makeSound called: MIAAAU!" << std::endl;
}
