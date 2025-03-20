#include <iostream>

int	main(int argc, char **argv)
{
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int y = 1; argv[y]; y++)
			for (int x = 0; argv[y][x]; x++)
				std::cout << static_cast<char>(toupper(argv[y][x]));
	}
	std::cout << "\n";
	return (0);
}
