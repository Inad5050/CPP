#include "Zombie.hpp"
#include <limits>

int	main(void)
{	
	int			N;
	std::string	name;

	std::cout << "zombie number: " << std::endl;
	if (!(std::cin >> N))
		return (1);
	std::cout << "zombie name: " << std::endl;
	if (!(std::cin >> name))
		return (1);
	Zombie* zombie_list = zombieHorde(N, name);
	delete [] zombie_list;
	return (0);
}
