#include "easyfind.hpp"

int	main()
{
	std::vector<int> container = {0, 1, 2, 3, 4, 5};
	try
	{
		::easyfind(container, 3);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
