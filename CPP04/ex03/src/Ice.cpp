#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(std::string& type): AMateria(type)
{
	std::cout << "Ice constructor called" << std::endl;
}

Ice::Ice(Ice &other): AMateria(other.type)
{
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
}

Ice& Ice::operator=(Ice& other)
{
	std::cout << "Ice copy operator called" << std::endl;
	if (this != &other)
		type = other.type; 
	return(*this);
}
	
Ice* Ice::clone() const
{
	std::cout << "Ice clone() member function called" << std::endl;
	Ice* other = new Ice();
	return (other);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

