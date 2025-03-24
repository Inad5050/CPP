#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "ScalarConverter constructor called" << std::endl;	
}

ScalarConverter:: ScalarConverter(ScalarConverter&)
{
	std::cout << "ScalarConverter copy constructor called" << std::endl;
}

ScalarConverter& ScalarConverter::operator=(ScalarConverter&)
{
	std::cout << "ScalarConverter copy operator called" << std::endl;
}

void ScalarConverter::convert()
{
	std::cout << "ScalarConverter convert() called" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "ScalarConverter destructor called" << std::endl;
}

