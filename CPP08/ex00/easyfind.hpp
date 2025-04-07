#pragma once
#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
typename T::iterator easyfind(T& container, int value) //T::iterator en C++ es una notación que hace referencia al tipo del iterador asociado con una clase o contenedor genérico T. //Define cómo se recorren los elementos dentro del contenedor.Define cómo se recorren los elementos dentro del contenedor.
{
	typename T::iterator it = std::find(container.start(), container.end(), value);
	if (it == container.end())
		throw std::exception();
	else
		return (it);
}
