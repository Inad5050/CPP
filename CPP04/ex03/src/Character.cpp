#include "Character.hpp"

Character::Character(): name("Default name")
{
	std::cout << "Character default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		inventory[i] = 0;
}

Character::Character(std::string name): name(name)
{
	std::cout << "Character constructor called. Only the name was copied. Materias weren't!" << std::endl;
	for (int i = 0; i < 4; i++)
		inventory[i] = 0;
}

Character::Character(Character& other): name(other.name)
{
	std::cout << "Character copy constructor called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			if (other.inventory[i] == 0)
				inventory[i] = 0;
			else if ((other.inventory[i]->getType()).compare("ice") == 0)
				inventory[i] = new Ice();
			else if ((other.inventory[i]->getType()).compare("cure") == 0)
				inventory[i] = new Cure();
			else
			{
				std::cout << "Cannot copy " << other.inventory[i]->getType() << " materia!" << std::endl;
				break;
			}
		}
	}
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] != 0)
		{
			delete inventory[i];
			inventory[i] = 0;
		}
	}
}

Character& Character::operator=(Character& other)
{
	std::cout << "Character copy operator called" << std::endl;
	if (this != &other)
	{
		name = other.name;
		for (int i = 0; i < 4; i++)
			delete inventory[i];		
		for (int i = 0; i < 4; i++)
		{
			if (other.inventory[i] == 0)
				inventory[i] = 0;
			else if ((other.inventory[i]->getType()).compare("ice") == 0)
				inventory[i] = new Ice();
			else if ((other.inventory[i]->getType()).compare("cure") == 0)
				inventory[i] = new Cure();
			else
			{
				std::cout << "Cannot copy " << other.inventory[i]->getType() << " materia!" << std::endl;
				break;
			}
		}
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (name);
}

void Character::equip(AMateria* m)
{	
	int	i;
	if (m == 0)
		std::cout << "Character equip() called! No materia to equip!" << std::endl;
	else
	{
		std::cout << "Character equip() called!" << std::endl;
		for (i = 0; i < 4; i++)
		{
			if (inventory[i] == 0)
			{
				inventory[i] = m;
				break;
			}
		}
		if (i == 4)
			std::cout << "Character equip() called! No free slots on the inventory!" << std::endl;
	}
}

void Character::unequip(int idx)
{
	if (inventory[idx] == 0)
		std::cout << "Character unequip() called! No materia equipped in " << idx << " inventory slot" << std::endl;
	else
	{	
		std::cout << "Character unequip() called! " << inventory[idx]->getType() << " materia dropped!" << std::endl;
		delete inventory[idx];
		inventory[idx] = 0;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "use(). i = " << idx << ". Invalid index" << std::endl;	
		return;
	}
	if (inventory[idx] == 0)
		std::cout << "Character use() called! No materia equipped in " << idx << " inventory slot" << std::endl;
	else
	{	
		std::cout << "Character use() called! " << std::endl;
		inventory[idx]->use(target);
	}
}
