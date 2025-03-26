#pragma once
#include <iostream>
#include <cstdlib>
#include <cstdlib> //std::rand(), std::srand()
#include <ctime> //std::time()

class A;
class B;
class C;

class Base
{
	public:
		Base();
		virtual ~Base();

		Base * generate(void);
		void identify(Base* p);
		void identify(Base& p);
};

	