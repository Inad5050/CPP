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
	return (*this);
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "ScalarConverter destructor called" << std::endl;
}

static void convert(const std::string& input) 
{
	std::cout << "ScalarConverter convert() called" << std::endl;
	if (input.empty())
	{
		std::cout << "Invalid input" << std::endl;
		return;
	}
	if (input.size() == 1 && std::isdigit(input[0]))
	{
		char c = static_cast<char>(input[0]);
		std::cout << "Data type: character" << std::endl;
		std::cout << "Character: " << c << std::endl;
		std::cout << "Integer: " << static_cast<int>(c) << std::endl;
		std::cout << "Float: " << static_cast<float>(c) << std::endl;
		std::cout << "Double: " << static_cast<double>(c) << std::endl;
		return;
	}
	char* endptr;
	long i = strtol(input.c_str(), &endptr, 10); //long strtol(const char* str, char** endptr, int base);
	if (*endptr == '\0')
	{
		std::cout << "Data type: integer" << std::endl;
		std::cout << "Character: " <<  << std::endl;
		std::cout << "i: " << i << std::endl;
		std::cout << "Float: " << static_cast<float>(i) << std::endl;
		std::cout << "Double: " << static_cast<double>(i) << std::endl;
		return;
	}
	float f = strtof(input.c_str(), &endptr);
	if (*endptr == '\0') //float strtof(const char* str, char** endptr);
	{
		std::cout << "Data type: float" << std::endl;
		std::cout << "Character: " << c << std::endl;
		std::cout << "Integer: " << static_cast<int>(f) << std::endl;
		std::cout << "Float: " << f << std::endl;
		std::cout << "Double: " << static_cast<double>(f) << std::endl;
		return;
	}
	if (input.size() == 1 && std::isdigit(input[0]))
	{
		std::cout << "Data type: double" << std::endl;
		std::cout << "Character: " <<  << std::endl;
		std::cout << "Integer: " <<  << std::endl;
		std::cout << "Float: " << static_cast<float>(c) << std::endl;
		std::cout << "Double: " << static_cast<double>(c) << std::endl;
		return;
	}
	std::cout << "Invalid input" << std::endl;
}













	if (input.empty())
	{
		std::cerr << "Error: no input." << std::endl;
		return;
	}

	if (input.length() == 1 && !std::isdigit(input[0])) //isdigit() checks if the string is a number
	{
		char c = input[0];
		std::cout << "char: '" << c << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(c) << std::endl;
		std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
		return;
	}

	if (isPseudoinput(input)) 
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << input << std::endl;
		std::cout << "double: " << input.substr(0, input.length() - 1) << std::endl;
		return;
	}

	char* end;
	long integer = std::strtol(input.c_str(), &end, 10);
	if (*end == '\0') 
	{
		if (integer < std::numeric_limits<int>::min() || integer > std::numeric_limits<int>::max()) {
			std::cerr << "Error: entero fuera de rango." << std::endl;
		} else {
			std::cout << "char: " << (isprint(static_cast<int>(integer)) ? "'" + std::string(1, static_cast<char>(integer)) + "'" : "no imprimible") << std::endl;
			std::cout << "int: " << integer << std::endl;
			std::cout << "float: " << static_cast<float>(integer) << ".0f" << std::endl;
			std::cout << "double: " << static_cast<double>(integer) << ".0" << std::endl;
		}
		return;
	}

	float floatVal = std::strtof(input.c_str(), &end);
	if (*end == 'f' && *(end + 1) == '\0') 
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << floatVal << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(floatVal) << std::endl;
		return;
	}

	double doubleVal = std::strtod(input.c_str(), &end);
	if (*end == '\0') 
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << static_cast<float>(doubleVal) << "f" << std::endl;
		std::cout << "double: " << doubleVal << std::endl;
		return;
	}

	std::cerr << "Error: invalid input" << std::endl;
}

void	print_result(std::string c, std::string i, std::string f, std::string d)
{
	std::cout << "character: " << c << std::endl;
	std::cout << "integer: " << c << std::endl;
	std::cout << "float: " << c << std::endl;
	std::cout << "double: " << c << std::endl;
	return;
}