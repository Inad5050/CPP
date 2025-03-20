#pragma	once
#include <iostream>

class	ClapTrap
{
	protected:
	std::string	name;
	int			HitPoints;
	int			EnergyPoints;
	int			AttackDamage;

	public:
	ClapTrap();
	ClapTrap(std::string std);
	ClapTrap(const ClapTrap& other);
	~ClapTrap();
	ClapTrap&	operator=(const ClapTrap &other);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	int		checkStatus() const;
};
