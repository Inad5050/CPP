#include "MutantStack.hpp"

int main()
{
MutantStack<int> mstack;
mstack.push(5);
mstack.push(17);
std::cout << mstack.top() << std::endl;
mstack.pop();
std::cout << mstack.size() << std::endl;
mstack.push(3);
mstack.push(5);
mstack.push(737);
//[...]
mstack.push(0);
MutantStack<int>::iterator it = mstack.begin();
MutantStack<int>::iterator ite = mstack.end();
++it;
--it;
while (it != ite)
{
std::cout << *it << std::endl;
++it;
}
std::stack<int> s(mstack);
return 0;
}

/* #include <list>

int main()
{
std::list<int> mstack;
mstack.push_back(5);
mstack.push_back(17);
std::cout << mstack.back() << std::endl;
mstack.pop_back();
std::cout << mstack.size() << std::endl;
mstack.push_back(3);
mstack.push_back(5);
mstack.push_back(737);
//[...]
mstack.push_back(0);
std::list<int>::iterator it = mstack.begin();
std::list<int>::iterator ite = mstack.end();
++it;
--it;
while (it != ite)
{
std::cout << *it << std::endl;
++it;
}
return 0;
} */

/* int main()
{
	MutantStack<int> stck;
	stck.push(11);
	stck.push(2);
	stck.push(66);
	stck.push(4);
	stck.push(5);
	stck.push(6);
	MutantStack<int>::iterator it_begin = stck.begin();
	MutantStack<int>::iterator it_end = stck.end();
	while (it_begin != it_end)
	{
		std::cout << *it_begin << std::endl;
		it_begin++;
	}
	return (0);
} */