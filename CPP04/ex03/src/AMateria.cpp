#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "Default AMateria constructor called" << std::endl;	
}

AMateria::AMateria(std::string const & type): type(type)
{
	std::cout << "AMateria constructor called" << std::endl;	
}

AMateria::AMateria(AMateria& other): type(other.type)
{
	std::cout << "AMateria copy constructor called" << std::endl;	
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;	
}

AMateria& AMateria::operator=(AMateria& other)
{
	std::cout << "AMateria copy operator called" << std::endl;
	if (this != &other)
		type = other.type;
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (type);
}

AMateria* AMateria::clone() const
{
	std::cout << "AMateria clone called, ERROR: this is a pure virtual member function" << std::endl;
	return (0);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "AMateria use called, ERROR: this is a virtual member function" << std::endl;	
	(void)target;
}
