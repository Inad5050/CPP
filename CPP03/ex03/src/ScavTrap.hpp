
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
// #pragma	once
#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class	ScavTrap: virtual public ClapTrap //ScavTrap contains the same public functionalities as ClapTrap
{
	public:
	ScavTrap();
	ScavTrap(std::string &str);
	ScavTrap(const ScavTrap& other);
	~ScavTrap();
	ScavTrap&	operator=(const ScavTrap& other);

	void	guardGate() const;
	void	attack(const std::string& target);
};
#endif
