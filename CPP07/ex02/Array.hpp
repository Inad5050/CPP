#pragma once
#include <iostream>

template <typename T> //se declaran fuera de las clases

class Array
{
	private:
	T *array;
	unsigned int size;

	public:
		Array();
		Array(unsigned int n);
		Array(const Array<T>& other);
		Array<T>& operator=(const Array<T>& other);
		~Array();

		unsigned int size();
};
