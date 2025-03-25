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
	private:
		std::string type;

	public:
		Base();
		Base(std::string str);
		~Base();

		Base * generate(void);
		void identify(Base* p);
		void identify(Base& p);

		std::string getType();
};
