#include "iter.hpp"
#include <iostream>

void	add1(int& num)
{
	num++;
}
void	add2(std::string& str)
{
	str.append(" saludos");
}

void	add3(char& c)
{
	c -= 32;
}

int	main()
{
	int array1[] = {1, 2, 3, 4, 5, 6}; 
	
	for (int i = 0; i < 6; i++)
		std::cout << array1[i] << std::endl;
	iter(array1, 6, &add1); //En C++98, no es estrictamente necesario pasar la dirección de memoria de la función usando el operador & al llamar a iter (es decir, escribir &add1), ya que el compilador automáticamente trata el nombre de la función como un puntero a dicha función.
	for (int i = 0; i < 6; i++)
		std::cout << array1[i] << std::endl;

	std::string array2[] = {std::string("ola"), std::string("kaixo"), std::string("hi")}; 
	
	for (int i = 0; i < 3; i++)
		std::cout << array2[i] << std::endl;
	iter(array2, 3, &add2);
	for (int i = 0; i < 3; i++)
		std::cout << array2[i] << std::endl;

	char array3[] = {'a', 'b', 'c', 'd', 'e', 'f'}; 
	
	for (int i = 0; i < 6; i++)
		std::cout << array3[i] << std::endl;
	iter(array3, 6, &add3);
	for (int i = 0; i < 6; i++)
		std::cout << array3[i] << std::endl;

	return (0);
}
