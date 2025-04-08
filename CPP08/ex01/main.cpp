#include "Span.hpp"

/* int main()
{
Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
return 0;
} */

/* int main()
{
	Span sp(100000);

	try
	{
		int array[10] = {1, 2, 6, 12312, 12355, 122, 121, 22, 6345, 12};
		sp.superAddNumber(array, 10);
		std::cout << sp.longestSpan() << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		sp.addNumber(15);
		sp.addNumber(16);
		sp.addNumber(16);
		sp.addNumber(123987);
		std::cout << sp.longestSpan() << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
} */

int main()
{
	Span sp(4);

	try
	{
		int array[10] = {1, 2, 6, 12312, 12355, 122, 121, 22, 6345, 12};
		sp.superAddNumber(array, 10);
		std::cout << sp.longestSpan() << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		sp.addNumber(15);
		sp.addNumber(16);
		sp.addNumber(16);
		sp.addNumber(123987);
		std::cout << sp.longestSpan() << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}