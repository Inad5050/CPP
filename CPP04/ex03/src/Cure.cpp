#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(std::string& type): AMateria(type)
{
	std::cout << "Cure constructor called" << std::endl;
}

Cure::Cure(Cure &other): AMateria(other.type)
{
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
}

Cure& Cure::operator=(Cure& other)
{
	std::cout << "Cure copy operator called" << std::endl;
	if (this != &other)
		type = other.type; 
	return(*this);
}
	
Cure* Cure::clone() const
{
	std::cout << "Cure clone() member function called" << std::endl;
	Cure* other = new Cure();
	return (other);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

