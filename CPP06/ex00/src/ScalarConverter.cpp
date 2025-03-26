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

void ScalarConverter::convert(const std::string& input)
{
	char* endptr;

	std::cout << "ScalarConverter convert() called" << std::endl;
	if (input.empty())
	{
		std::cout << "Invalid input" << std::endl; 
		return;
	}
	//character
	if (input.size() == 1)
	{
		char c = input.at(0);
		std::cout << "Character: " << input.at(0) << std::endl;
		std::cout << "Integer: " << static_cast<int>(c) << std::endl;
		std::cout << "Float: " << static_cast<float>(c) << "f" << std::endl;
		std::cout << "Double: " << static_cast<double>(c) << std::endl;
		return;
	}
	//integer 
	long integer = std::strtol(input.c_str(), &endptr, 10);//long strtol(const char* str, char** endptr, int base);
	if (*endptr == '\0' && std::numeric_limits<int>::min() < integer && integer < std::numeric_limits<int>::max())
	{
		if (32 <= integer && integer <= 126)
			std::cout << "Char: " << static_cast<char>(integer) << std::endl;
		else
			std::cout << "Char: out of limits" << std::endl;
		std::cout << "Integer: " << integer << std::endl;
		std::cout << "Float: " << static_cast<float>(integer) << "f" << std::endl;
		std::cout << "Double: " << static_cast<double>(integer) << std::endl;
		return;
	}
	//float
	float fl = std::strtof(input.c_str(), &endptr);
	//Si la cadena contiene un sufijo de tipo flotante como f (por ejemplo, "3.14f"), std::strtof procesa la parte numérica (3.14) y deja el puntero end apuntando al sufijo (f). Esto sucede porque el sufijo no forma parte del número en sí, pero es válido en ciertos contextos de C++ para indicar un literal flotante.
	if (*endptr == 'f' && *(endptr + 1) == '\0' && std::numeric_limits<float>::min() < fl && fl < std::numeric_limits<float>::max()) //float strtof(const char* str, char** endptr);
	{
		if (32 <= fl && fl <= 126)
			std::cout << "Char: " << static_cast<char>(fl) << std::endl;
		else
			std::cout << "Char: out of limits" << std::endl;
		if (std::numeric_limits<int>::min() < fl && fl < std::numeric_limits<int>::max())
			std::cout << "Integer: " << static_cast<int>(fl) << std::endl;
		else
			std::cout << "Integer: out of limits" << std::endl;
		std::cout << "Float: " << fl << "f" << std::endl;
		std::cout << "Double: " << static_cast<double>(fl) << std::endl;
		return;
	}
	//double
	double dbl = std::strtod(input.c_str(), &endptr);
	if (*endptr == '\0' && std::numeric_limits<double>::min() < dbl && dbl < std::numeric_limits<double>::max())
	{
		if (32 <= dbl && dbl <= 126)
			std::cout << "Char: " << static_cast<char>(dbl) << std::endl;
		else
			std::cout << "Char: out of limits" << std::endl;
		if (std::numeric_limits<int>::min() < dbl && dbl < std::numeric_limits<int>::max())
			std::cout << "Integer: " << static_cast<int>(dbl) << std::endl;
		else
			std::cout << "Integer: out of limits" << std::endl;
		if (std::numeric_limits<float>::min() < dbl && dbl < std::numeric_limits<float>::max())
			std::cout << "Float: " << static_cast<float>(dbl) << "f" << std::endl;
		else
			std::cout << "Float: out of limits" << std::endl;
		std::cout << "Double: " << dbl << std::endl;
		return;
	}
	std::cout << "Invalid input" << std::endl;
}
