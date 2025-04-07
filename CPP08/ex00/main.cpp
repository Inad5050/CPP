#include "easyfind.hpp"

/* int	main(void)
{
	int array[] = {1, 2, 3, 4, 5};
	std::vector<int> container(array, array + 5);


	std::vector<int>::iterator it;
	try
	{
		it = easyfind(container, 99);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		it = easyfind(container, 4);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "easyfind apunta a: " << *it << std::endl;
	return (0);
}
 */

int	main(void)
{
	int	array[] = {1, 2, 3, 4, 5};
	std::vector<int>	container(array, array + 5);
	std::vector<int>::iterator it = easyfind(container, 10);
	it = easyfind(container, 4);
	std::cout << "easyfind apunta a: " << *it << std::endl;
	return (0);
}
