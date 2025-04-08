#include "BitcoinExchange.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
		return(std::cerr << "ERROR: give me an input file. Closing" << std::endl, 1);
	try
	{
		BitcoinExchange awesome(argv[1]);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}