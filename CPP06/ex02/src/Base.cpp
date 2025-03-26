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
	int num = rand();
	Base* p = NULL;
	if (num % 3 == 0)
		p = new A();
	else if (num % 3 == 1)
		p = new B();
	else if (num % 3 == 2)
		p = new C();
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
	A& classA();
	B& classB();
	C& classC();
	
	std::cout << "identify() function called." << std::endl;
	try
	{
		classA = dynamic_cast<A&>(p); //dynamic_cast automatically throws an exception (std::badcast)
	}
	catch (const std::exception& e)
	{
		std::cerr << "Class is not type A. " << e.what() << std::endl;
	}
	try
	{
		classB = dynamic_cast<B&>(p);
	}
	catch (const std::exception& e)
	{
		std::cerr << "Class is not type B. " << e.what() << std::endl;
	}
	try
	{
		classC = dynamic_cast<C&>(p);
	}
	catch (const std::exception& e)
	{
		std::cerr << "Class is not type C. " << e.what() << std::endl; 
	}
}
