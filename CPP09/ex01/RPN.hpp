#pragma once
#include <iostream>
#include <stack>
#include <cctype>
#include <cstring>
#include <cstdlib>

class RPN
{
	private:
	std::stack<char> array;

	public:
	RPN();
	RPN(const char* input);
	RPN(const RPN& other);
	RPN& operator=(const RPN& other);
	~RPN();
	
	int		addElements(const char* input);
	void	solve();
};