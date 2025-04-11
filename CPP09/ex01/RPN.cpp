#include "RPN.hpp"

RPN::RPN()
{
	std::cout << "Default RPN constructor called" << std::endl;
}

RPN::RPN(const char* input)
{
	std::cout << "RPN constructor called" << std::endl;
	addElements(input);
}


RPN::RPN(const RPN& other)
{
	std::cout << "RPN copy constructor called" << std::endl;
	array = other.array;
}

RPN& RPN::operator=(const RPN& other)
{
	std::cout << "RPN copy operator called" << std::endl;
	if (this != &other)
		array = other.array;
	return (*this);
}

RPN::~RPN()
{
	std::cout << "RPN destructor called" << std::endl;
}	

int	RPN::addElements(const char *input)
{
	std::cout << "RPN addElements() called" << std::endl;

	int	nonNmbCount = 0;
	int	nmbCount = 0;
	char accepted_chars[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '+', '-', '*', '/', ' '};
	for (int i = 0; input[i]; i++)
	{
		if (i == 0 && !std::isdigit(input[0]))
			return (std::cerr << "First character must be a numeric value: " << input[i] << std::endl, 1);
		if (!std::strchr(accepted_chars, input[i]))
			return (std::cerr << "Invalid character: " << input[i] << std::endl, 1);
		if (input[i] == 32 || (9 <= input[i] && input[i] <= 13))
			continue;
		if (!std::isdigit(input[i])) //devuelve 0 si no es un numero
			nonNmbCount += 1;
		else
			nmbCount += 1;
	}
	for (int i = static_cast<int>(std::string(input).size() - 1); i >= 0; i--)
	{
		if (input[i] == 32 || (9 <= input[i] && input[i] <= 13))
			continue;
		array.push(input[i]);
	}
	if (array.empty())
		return (std::cerr << "Container is empty" << std::endl, 1);
	if (!(nonNmbCount + 1 == nmbCount))
		return (std::cerr << "There cannot be more than x non-numeric characters unless prefaced by x+1 numeric characters" << std::endl, 1);
	if (nmbCount > 10)
		return (std::cerr << "Too many numbers" << std::endl, 1);

/* 	size_t size = array.size();
	std::cout << "size = " << size << std::endl; //
	for (size_t i = 0; i < size; i++)
	{
		std::cout << "array.top() = " << array.top() << std::endl;
		array.pop();
	}	 */	

	solve();
	return (0);
}

void	RPN::solve()
{
	std::cout << "RPN solve() called" << std::endl;

	std::stack<char>	lastNmbs;
	int					lastNmbsCount = 0;
	std::stack<char>	lastNonNmbs;
	char				lastNonNmbsCount = 0;
	int					nonNumberFlag = 0;
	int					result = array.top() - '0';

	/* std::cout << "size = " << array.size() << std::endl; // */
	
	array.pop();
	size_t size = array.size();

	for (size_t i = 0; i < size; i++)
	{

		/* std::cout << "i = " << i << " ; result = " << result << std::endl; */

		if (std::isdigit(array.top()))
		{
			lastNmbs.push(array.top());
			lastNmbsCount++;
		}
		else
		{
			lastNonNmbs.push(array.top());
			lastNonNmbsCount++;
			nonNumberFlag = 1;
		}
		if (nonNumberFlag)
		{
			switch(lastNonNmbs.top())
			{
				case '+':
					result = result + (lastNmbs.top() - '0');
					break;
				case '-':
					result = result - (lastNmbs.top() - '0');
					break;
				case '*':
					result = result * (lastNmbs.top() - '0');
					break;
				case '/':
					result = result / (lastNmbs.top() - '0');
					break;
			}
			lastNmbs.pop();
			lastNonNmbs.pop();
		}
		nonNumberFlag = 0;
		array.pop();
	}
	std::cout << result << std::endl;
}
