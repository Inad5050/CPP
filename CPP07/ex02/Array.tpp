#include "Array.hpp"

template <typename T>
Array<T>::Array(): array(NULL), size(0)
{
	std::cout << "Array default constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n): array(new T[n]), size(n)
{
	std::cout << "Array default constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(const Array<T>& other): array(new T[other.size()]), size(other.size())
{
	std::cout << "Array copy constructor called" << std::endl;
	for (int i = 0; i < other.size(), i++)
		array[i] = other.array[i];
}

template <typename T>
Array<T>::~Array()
{
	std::cout << "Array destructor called" << std::endl;
	delete[] array;
}


template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other)
{
	std::cout << "Array copy operator called" << std::endl;
	if (this != &other)
	{
		size = other.size();
		delete[] array;
		array = new T[other.size()];
		for (int i = 0; i < other.size(), i++)
			array[i] = other.array[i];
	}
	return (*this);
}

template <typename T>
unsigned int	Array<T>::size()
{
	return (size);
}

/* template <typename T> //En C++, los arreglos dinámicos (new T[n]) no tienen un indicador del tamaño ni un terminador automático, como NULL. Por lo tanto, recorrerlo hasta que array[i] sea NULL no es fiable.
unsigned int	Array<T>::size()
{
	for (int i = 0; array[i]; i++);
	return (i);
} */