#pragma once
#include <iostream>

template <typename T>

void	iter(T *array, int lenght, void (*f)(T &)) //void* f(T&): f devuelve un puntero genérico (void*). void (*f)(T&): f se declara como un puntero a una función
{
	for (int i = 0; i < lenght; i++)
		f(array[i]);
};
