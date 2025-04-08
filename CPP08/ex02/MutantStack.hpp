#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>

template <typename T>
class	MutantStack: public std::stack<T> //std::stack es un contenedor adaptador que se utiliza para implementar una estructura de datos tipo pila (stack). Una pila sigue el principio LIFO (Last In, First Out), lo que significa que el último elemento insertado es el primero en ser eliminado.
{
	public:
	MutantStack();
	MutantStack(const MutantStack<T>& other);
	
	MutantStack<T>& operator=(const MutantStack<T>& other);
	~MutantStack();
	
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;

	typename std::stack<T>::container_type::iterator end();
	typename std::stack<T>::container_type::const_iterator end() const;
	typename std::stack<T>::container_type::iterator begin();
	typename std::stack<T>::container_type::const_iterator begin() const;
};

#include "MutantStack.tpp"

