#include "easyfind.hpp"

int	main(void)
{
	int array[] = {1, 2, 3, 4, 5};
	std::vector<int> container(array, array + 5);
	int it;

	try
	{
		it = easyfind(container, 99);
		std::cout << "easyfind points to: " << it << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		it = easyfind(container, 4);
		std::cout << "easyfind points to: " << it << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}


/* int	main(void)
{
	int	array[] = {1, 2, 3, 4, 5};
	std::vector<int>	container(array, array + 5);
	std::vector<int>::iterator it = easyfind(container, 4);
	if (it == container.end())
		return (1);
	std::cout << "easyfind points to: " << *it << std::endl;
	return (0);
} */
