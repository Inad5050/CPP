template <typename T>
MutantStack<T>::MutantStack(): std::stack<T>()
{
	std::cout << "MutantStack default constructor called" << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T>& other)
{
	std::cout << "MutantStack copy constructor called" << std::endl;
	this->c = other.c;
}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T>& other)
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
typename std::stack<T>::container_type::iterator MutantStack<T>::end() //se asume la relación de herencia porque std::stack<T> es la clase base de MutantStack
{
	std::cout << "MutantStack end method called" << std::endl;
	return (this->c.end());
}

template <typename T>
typename std::stack<T>::container_type::const_iterator MutantStack<T>::end() const
{
	std::cout << "MutantStack end method called" << std::endl;
	return (this->c.end());
}
 
template <typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::begin()
{
	std::cout << "MutantStack begin method called" << std::endl;
	return (this->c.begin()); 
}

template <typename T>
typename std::stack<T>::container_type::const_iterator MutantStack<T>::begin() const //en los .tpp tambíen se pone const
{
	std::cout << "MutantStack begin method called" << std::endl;
	return (this->c.begin());
}
 
