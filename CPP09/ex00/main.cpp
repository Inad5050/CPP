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

/* date | value
2011-01-03 | 3
2011-01-03 | 2
2011-01-03 | 1
2011-01-03 | 1.2
2011-01-09 | 1
2012-13-11 | -1
2001-42-42
2012-01-11 | 1
2012-01-11 | 2147483648
2022-03-19 | 1
2022-03-22 | 2
2022-03-25 | 1
2022-03-29 | 5

input2.txt
date | value
2022-03-19 | 1
2022-03-22 | 1
2022-03-25 | 1
2022-03-29 | 1 */
