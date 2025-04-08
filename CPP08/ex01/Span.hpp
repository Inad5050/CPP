#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>

class Span
{
	private:
	std::vector<int>	vec;
	unsigned int		N;
	unsigned int		filled;
	Span(); //Si declaras un solo constructor de forma explicita el compilador no creara los otros dos. Pero la forma canonico orotodoxa exigue que declaremos el constrcutor sin argumentos asi que aqui va, en privado para que no se use

	public:
	Span(unsigned int N);
	Span(const Span& other);
	Span& operator=(const Span& other);
	~Span();

	void addNumber(int nmb);
	void superAddNumber(int array[], int size);
	int shortestSpan(); //Los algoritmos de la biblioteca estándar de C++ (std::find, std::min_element, std::max_element, etc.) funcionan tanto con contenedores (como std::vector, std::list, etc.) como con arrays tradicionales de C. Esto es posible porque los algoritmos operan sobre iteradores o punteros, y un array en C puede ser tratado como un rango utilizando punteros.
	int longestSpan();
};

