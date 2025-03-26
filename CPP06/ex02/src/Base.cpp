#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::Base()
{
	std::cout << "Default Base constructor called" << std::endl;
}

Base::~Base()
{
	std::cout << "Base destructor called" << std::endl;
}

Base * Base::generate(void)
{
	std::cout << "generate() function called" << std::endl;
	srand(time(0));
	int num = rand() % 3;
	Base* p;
	switch (num)
	{
		case(0):
			p = new A();
			break;
		case(1):
			p = new B();
			break;
		case(2):
			p = new C();
			break;
		default:
			p = NULL;
	}
	return (p);
}

void Base::identify(Base* p)
{
	A* ptrA;
	B* ptrB;
	C* ptrC;
	if (!p)
		std::cerr << "identify() function called. Null pointer" << std::endl;	
	std::cout << "identify() function called." << std::endl;
	ptrA = dynamic_cast<A*>(p); 
	if (ptrA)
	{
		std::cout << "Class type: A" << std::endl;
		return;
	}
	ptrB = dynamic_cast<B*>(p); 
	if (ptrB)
	{
		std::cout << "Class type: B" << std::endl;
		return;
	}
	ptrC = dynamic_cast<C*>(p);
	if (ptrC)
	{
		std::cout << "Class type: C" << std::endl;
		return;
	}
}

void Base::identify(Base& p)
{
	std::cout << "identify() function called." << std::endl;
	try
	{
		A& classA = dynamic_cast<A&>(p); //dynamic_cast automatically throws an exception (std::badcast)
		(void)classA;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Class is not type A" << e.what() << std::endl;
	}
	try
	{
		B& classB = dynamic_cast<B&>(p);
		(void)classB;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Class is not type B" << e.what() << std::endl;
	}
	try
	{
		C& classC = dynamic_cast<C&>(p);
		(void)classC;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Class is not type C" << e.what() << std::endl; 
	}
}
