#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>

template <typename T>
class	MutantStack: public std::stack<T> //std::stack es un contenedor adaptador que se utiliza para implementar una estructura de datos tipo pila (stack). Una pila sigue el principio LIFO (Last In, First Out), lo que significa que el último elemento insertado es el primero en ser eliminado.
{
	MutantStack();
	MutantStack(T* begin, T* end);
	MutantStack(const MutantStack<T>& other);
	MutantStack<T>& operator=(const MutantStack<T>& other);
	~MutantStack();
	typedef typename std::stack<T>::container_type container_type; //accedemos al contendedor subyacente de Stack()
	typedef typename container_type::iterator iterator; //y definimos un tipo que sea una copia de su iterador
	typedef typename container_type::const_iterator const_iterator;
	iterator end();
	const_iterator end() const;
	iterator begin();
	const_iterator begin() const;
};

#include "MutantStack.tpp"

