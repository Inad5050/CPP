#pragma once
#include <iostream>
#include <cstdint>

class	Serializer
{
	private:
		Serializer();
		Serializer(Serializer&);
		Serializer& operator=(Serializer&);

	public:
		~Serializer();
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

struct Data
{
	int			id;
	std::string str;
};
