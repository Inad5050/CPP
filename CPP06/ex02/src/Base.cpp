#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::Base(): type("default")
{
	std::cout << "Default Base constructor called" << std::endl;
}

Base::Base(std::string str)
{
	std::cout << "Default Base constructor called" << std::endl;
	type = str;
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
	std::cout << "identify() function called. Class: " << p->getType() << std::endl;
}

void Base::identify(Base& p)
{
	std::cout << "identify() function called. Class: " << p.getType() << std::endl;
}

std::string Base::getType()
{
	return (type);
}
