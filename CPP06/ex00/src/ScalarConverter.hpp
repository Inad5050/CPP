#pragma once
#include <iostream>

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