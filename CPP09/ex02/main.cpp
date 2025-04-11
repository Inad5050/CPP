#include "PmergeMe.hpp"

int	main(int argc, char** argv)
{
	if (argc != 2)	
		return (std::cerr << "Incorrect arguments. Give me a positive integer sequence" << std::endl, 1);
	PmergeMe	merger;
	if (merger.add(argv[1]))
		return (1);
	merger.sort();
	return (0);
}

