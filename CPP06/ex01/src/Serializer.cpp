#include "Serializer.hpp"

Serializer::Serializer()
{
	std::cout << "Serializer constructor called" << std::endl;	
}

Serializer:: Serializer(Serializer&)
{
	std::cout << "Serializer copy constructor called" << std::endl;
}

Serializer& Serializer::operator=(Serializer&)
{
	std::cout << "Serializer copy operator called" << std::endl;
	return (*this);
}

Serializer::~Serializer()
{
	std::cout << "Serializer destructor called" << std::endl;
}

uintptr_t Serializer::serialize(Data* ptr)
{
	std::cout << "Serialize() called" << std::endl;
	return reinterpret_cast<uintptr_t>(ptr);

}

Data* Serializer::deserialize(uintptr_t raw)
{
	std::cout << "Deserialize() called" << std::endl;
	return reinterpret_cast<Data*>(raw);
}