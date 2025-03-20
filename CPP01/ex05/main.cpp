#include "Harl.hpp"
#include <limits>

int	main(void)
{
	std::string	input;
	std::string	posible_input[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	size_t		input_num = sizeof(posible_input) / sizeof(posible_input[0]);
	Harl		mrHarl;
	int			flag;

	while (1)
	{
		flag = 0;
		std::cout << "Enter: DEBUG, INFO, WARNING, ERROR or EXIT" << std::endl;
		if (!std::getline(std::cin, input))
		{
			if (std::cin.eof())
				return (1);
			else
			{
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max());
				std::cout << "Invalid input" << std::endl;
			}
		}
		for (size_t i = 0; i < input_num; i++)
		{
			if (!input.compare("EXIT"))
				return (std::cout << "Where are you going!? Im still speaking..." << std::endl, 0);
			if (!input.compare(posible_input[i]))
			{
				mrHarl.complain(input);
				flag = 1;
			}
		}
		if (flag)
			continue;
		std::cout << "Invalid input" << std::endl;
	}
	return (0);
}
