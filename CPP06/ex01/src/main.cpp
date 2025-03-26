#include "Serializer.hpp"

int	main()
{
	Data	struc;
	struc.id = 0;
	struc.str = "primero";

	std::cout << &struc << std::endl;
	uintptr_t ptr1 = Serializer::serialize(&struc);
	Serializer::deserialize(ptr1);
	std::cout << Serializer::deserialize(ptr1) << std::endl;

	std::cout << "struc.id = " << struc.id << std::endl;
	std::cout << "struc.str = " << struc.str << std::endl;

	return (0);
}
