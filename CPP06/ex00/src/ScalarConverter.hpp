#pragma once
#include <iostream>
#include <stdlib.h> //strtol, strtof, strtod
#include <limits> //<numeric_limits>::max()
#include <cmath> //nan, nanf

class	ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(ScalarConverter&);
		ScalarConverter& operator=(ScalarConverter&);

	public:
		static void convert(const std::string& literal);
		~ScalarConverter();
};
