#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
	std::cout << "PmergeMe default constructor called" << std::endl;	
}

PmergeMe::PmergeMe(const char* input)
{
	std::cout << "PmergeMe constructor called" << std::endl;
	addElements(input);
}

PmergeMe::PmergeMe(const PmergeMe& other)
{
	std::cout << "PmergeMe copy constructor called" << std::endl;
	(void)other;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& other)
{
	std::cout << "PmergeMe copy operator called" << std::endl;
	(void)other;
	return (*this);
}

PmergeMe::~PmergeMe()
{
	std::cout << "PmergeMe destructor called" << std::endl;
}

int	PmergeMe::addElements(const char* input)
{
	for (int i = 0; input[i]; i++)
	{
		if (input[i] == 32 || (9 <= input[i] && input[i] <= 13))
			continue;
		if (!std::isdigit(input[i]))
			return (std::cerr << "Invalid element: " << input[i] << " ; Give me a positive integer sequence"  << std::endl, 1);
	}

	std::string inputString("input");
	char delimiters_str[] =	{32, 9, 10, 11, 12, 13};
	std::string delimiters(delimiters_str);
	size_t begin = 0;
	size_t end = 0;
	vector<char*> subStringVector;

	while (inputString.find_first_of(delimiters, begin) != std::string::npos)
	{
		if (begin > end) //nos aseguramos de que begin hata avanzado + de un caracter
			subStringVector.push_back(inputString.substr(begin, ))
		end = begin + 1;
	}

	
	return (0);
};