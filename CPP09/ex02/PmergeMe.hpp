#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <cstdlib>
#include <limits>
#include <sstream>
#include <algorithm>
#include <unistd.h>
#include <ctime>

class PmergeMe
{
	private:
	std::vector<int> vector;
	std::list<int> list;

/* 	void	sortMergeInsertVector(std::vector<int> &cont);
	void	insertionSortVector(std::vector<int>& vec);
	void	sortMergeInsertList(std::list<int> &cont);
	void	insertionSortList(std::list<int>& lst); */
	void 	sortMergeInsertVector(std::vector<int>& sequence);
	void 	sortMergeInsertList(std::list<int>& sequence);

	public:
	PmergeMe();
	PmergeMe(const char* input);
	PmergeMe(const PmergeMe& other);
	PmergeMe& operator=(const PmergeMe& other);
	~PmergeMe();

	int		add(const char* input);
	void	sort();
};