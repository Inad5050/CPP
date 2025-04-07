#pragma once
#include <iostream>

template <typename T> //se declaran fuera de las clases
class Array // las definiciones de métodos de clases template deben estar completamente visibles en el momento de la compilación; en otras palabras, las definiciones deben estar en el mismo archivo o incluidas de manera visible para el compilador.
// A diferencia de las clases y funciones normales, las plantillas no generan código inmediatamente después de ser declaradas. En su lugar, actúan como un molde que el compilador utiliza para generar código cuando se instancian con un tipo específico. Esto se conoce como instanciación en tiempo de compilación.
{
	private:
	T *array;
	unsigned int size;

	public:
		Array();
		Array(unsigned int n);
		Array(const Array<T>& other);
		~Array();
		Array<T>& operator=(const Array<T>& other);

		unsigned int get_size() const;

		T& operator[](unsigned int i);
};

#include "Array.tpp" //en el caso de las clases plantilla las deinificiones tienen que estar presentes en el header. Para eso usamos los .tpp, funcionan como un .cpp pero se incluyen al final del .hpp