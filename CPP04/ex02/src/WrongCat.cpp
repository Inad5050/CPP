#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	std::cout << "Generic Wrongcat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other): WrongAnimal(other.type)
{
	std::cout << "Copy Wrongcat constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& other)
{
	std::cout << "WrongCat copy operator called" << std::endl;
	if (this != &other)
		WrongAnimal::operator=(other);
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat makeSound called: MIAAAU!" << std::endl;
}
