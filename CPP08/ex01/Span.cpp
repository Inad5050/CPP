#include "Span.hpp"

Span::Span(): N(0)//vec (std::vector<int>): Los objetos de tipo std::vector tienen un constructor por defecto que inicializa el vector como vacío automáticamente. No necesitas hacer nada adicional, ya que el comportamiento por defecto garantiza que el vector esté listo para su uso y no contenga elementos inicialmente.
{
	std::cout << "Span default constructor called" << std::endl;
}

Span::Span(unsigned int N): N(N) //Sí, un std::vector puede ser inicializado con un unsigned int para especificar el número de elementos que debe contener inicialmente. Cuando haces esto, el vector crea la cantidad de elementos indicada y los inicializa con el valor predeterminado del tipo de dato almacenado (por ejemplo, 0 para enteros, nullptr para punteros, etc.).
{
	std::cout << "Span constructor called" << std::endl;
}

Span::Span(const Span& other): vec(other.vec), N(other.N)
{
	std::cout << "Span copy constructor called" << std::endl;
}

Span& Span::operator=(const Span& other)
{
	std::cout << "Span copy operator called" << std::endl;
	if (this != &other)
	{
		vec = other.vec;
		N = other.N;
		filled = other.filled;
	}
	return (*this);
}

Span::~Span()
{
	std::cout << "Span destructor called" << std::endl;
}

void Span::addNumber(int nmb)
{
	std::cout << "Add number called " << N << " " << vec.size() << std::endl;
	if (N <= vec.size())
		throw std::out_of_range("EXCEPTION: addNumber");
	vec.push_back(nmb);
}

void Span::superAddNumber(int *arr, int size)
{
	std::cout << "superAdd number called " << std::endl;
	if (arr == NULL || N <= size + vec.size())
		throw std::out_of_range("EXCEPTION: superAddNumber");
	else
		vec.insert(vec.end(), arr, arr + size);
}

int Span::shortestSpan()
{
	std::cout << "shortestSpan called " << std::endl;
	if (vec.size() < 2)
		throw std::out_of_range("EXCEPTION: shortestSpan");
	int size = vec.size();
	int results[size];

	std::adjacent_difference(vec.begin(), vec.end(), results); //La salida de std::adjacent_difference contiene el mismo número de elementos que el rango de entrada. El primer elemento del vec de salida será igual al primer elemento del rango de entrada (es decir, differences[0] = vec[0]). Los elementos restantes serán las diferencias consecutivas calculadas. 

	for (int i = 0; i < size; i++)
		results[i] = abs(results[i]); 
	
	return(*(std::min_element(results + 1, results + size)));
}

int Span::longestSpan()
{
	std::cout << "longestSpan called " << std::endl;
	if (vec.size() < 2)
		throw std::out_of_range("EXCEPTION: longestSpan");
	return(*(std::max_element(vec.begin(), vec.end())) - *(std::min_element(vec.begin(), vec.end())));
}
