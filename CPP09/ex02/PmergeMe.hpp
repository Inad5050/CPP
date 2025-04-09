#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <cstdlib>
#include <limits>
#include <sstream>

class PmergeMe
{
	private:
	std::vector<int> vector;
	std::list<int> list;
	
	public:
	PmergeMe();
	PmergeMe(const char* input);
	PmergeMe(const PmergeMe& other);
	PmergeMe& operator=(const PmergeMe& other);
	~PmergeMe();

	int	addElements(const char* input);
};