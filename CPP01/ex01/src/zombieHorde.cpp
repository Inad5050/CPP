#include "Zombie.hpp"
#include <string>
#include <vector>

Zombie* zombieHorde(int N, std::string name)
{
	if (N <= 0)
		return (NULL);
	Zombie* zombie_list = new Zombie[N];
	for (int i = 0; i < N; ++i)
	{
		zombie_list[i].change_name(name);
		zombie_list[i].announce();
	}
	return (zombie_list);
}
