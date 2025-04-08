template <typename T>
MutantStack<T>::MutantStack(): std::stack<T>()
{
	std::cout << "MutantStack default constructor called" << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack(T* begin, T* end): std::stack<T>(begin, end)
{
	std::cout << "MutantStack constructor called" << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack<T>& other):
{
	std::cout << "MutantStack copy constructor called" << std::endl;
	this->c = other.c;
}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(MutantStack<T>& other)
{
	std::cout << "MutantStack copy assignment operator called" << std::endl;
	if (this != &other)
		this->c = other.c;
	return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack()
{
	std::cout << "MutantStack destructor called" << std::endl;
}

template <typename T>
typename MutantStack<T>::iterator end()
{
	std::cout << "MutantStack end method called" << std::endl;
	return (container_type.end());
}

template <typename T>
typename MutantStack<T>::const_iterator end()
{
	std::cout << "MutantStack end method called" << std::endl;
	return (const container_type.end());
}
 
template <typename T>
typename MutantStack<T>::iterator begin()
{
	std::cout << "MutantStack begin method called" << std::endl;
	return (container_type.begin()); 
}

template <typename T>
typename MutantStack<T>::const_iterator begin()
{
	std::cout << "MutantStack begin method called" << std::endl;
	return (const container_type.begin());
}
 
