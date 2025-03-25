#include "ScalarConverter.hpp"

int	main(int argc, char** argv)
{
	if (argc != 2)
		return (std::cout << "Usage: ./<Scalar> <argument1>" << std::endl, 1);
	
	std::string const input(argv[1]);
	ScalarConverter::convert(input);
	
	return (0);
}
