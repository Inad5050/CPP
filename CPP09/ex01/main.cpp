#include "RPN.hpp"

int	main(int argc, char** argv)
{
	if (argc != 2)
		return (std::cerr << "Invalid argument number. Give me one char*" << std::endl, 1);
	RPN maths(argv[1]);
	return(0);
}