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

	char c = static_cast<char>(input[0]);
	if (input.size() == 1) //character
	{
		std::cout << "Character: " << c << std::endl;
		std::cout << "Integer: " << static_cast<int>(c) << std::endl;
		std::cout << "Float: " << static_cast<float>(c) << std::endl;
		std::cout << "Double: " << static_cast<double>(c) << std::endl;
		return;
	}

	long integer = std::strtol(input.c_str(), &endptr, 10); //integer //long strtol(const char* str, char** endptr, int base);
	if (*endptr == '\0' && std::numeric_limits<int>::min() < integer && integer < std::numeric_limits<int>::max())
	{
		std::cout << "Character: " << (std::isprint(static_cast<char>(integer)) ? std::string(1, static_cast<char>(integer)) : "not printable") << std::endl; //int isprint(int ch) returns 0 when is not printable //you cant init a std::string with just a character, you need to provide a previous argument telling how many times is that character repeated 
		std::cout << "Integer: " << integer << std::endl;
		std::cout << "Float: " << static_cast<float>(integer) << std::endl;
		std::cout << "Double: " << static_cast<double>(integer) << std::endl;
		return;
	}

	float fl = std::strtof(input.c_str(), &endptr); //Si la cadena contiene un sufijo de tipo flotante como f (por ejemplo, "3.14f"), std::strtof procesa la parte numérica (3.14) y deja el puntero end apuntando al sufijo (f). Esto sucede porque el sufijo no forma parte del número en sí, pero es válido en ciertos contextos de C++ para indicar un literal flotante.
	if (*endptr == 'f' && *(endptr + 1) == '\0') //float strtof(const char* str, char** endptr);
	{
		std::cout << "Character: impossible" << std::endl;
		std::cout << "Integer: impossible" << std::endl;
		std::cout << "Float: " << fl << std::endl;
		std::cout << "Double: " << static_cast<double>(fl) << std::endl;
		return;
	}

	double dbl = std::strtod(input.c_str(), &endptr);
	if (*endptr == '\0') //double
	{
		std::cout << "Character: impossible" << std::endl;
		std::cout << "Integer: impossible" << std::endl;
		std::cout << "Float: " << static_cast<float>(dbl) << std::endl;
		std::cout << "Double: " << dbl << std::endl;
		return;
	}
	std::cout << "Invalid input" << std::endl;
}
