#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
	std::cout << "PmergeMe default constructor called" << std::endl;	
}

PmergeMe::PmergeMe(const char* input)
{
	std::cout << "PmergeMe constructor called" << std::endl;
	add(input);
}

PmergeMe::PmergeMe(const PmergeMe& other)
{
	std::cout << "PmergeMe copy constructor called" << std::endl;
	vector = other.vector;
	list = other.list;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& other)
{
	std::cout << "PmergeMe copy operator called" << std::endl;
	if (this != &other)
	{
		vector = other.vector;
		list = other.list;
	}
	return (*this);
}

PmergeMe::~PmergeMe()
{
	std::cout << "PmergeMe destructor called" << std::endl;
}

int	PmergeMe::add(const char* input)
{
	for (int i = 0; input[i]; i++)
	{
		if (input[i] == 32 || (9 <= input[i] && input[i] <= 13))
			continue;
		if (!std::isdigit(input[i]))
			return (std::cerr << "Error: Invalid element: " << input[i] << " ; Give me a positive integer sequence"  << std::endl, 1);
	}

	std::string inputString(input);
	if (inputString.empty())
		return (std::cerr << "Error: Empty arguments" << std::endl, 1);

	char delimiters_str[] =	{32, 9, 10, 11, 12, 13};
	std::string delimiters(delimiters_str);
	size_t begin = 0;
	size_t end = 0;
	std::vector<std::string> subStringVector;
	inputString.append(1, 32);

	while ((end = inputString.find_first_of(delimiters, begin)) != std::string::npos)
	{
		if (end > begin) //nos aseguramos de que begin hata avanzado + de un caracter
			subStringVector.push_back(inputString.substr(begin, end - begin)); //substr(begin, end); arg1(begin): donde empezar a extraer, arg2(end) cuantos caracteres extraer. devuelve una std::string  
		begin = end + 1;
	}

	if (subStringVector.empty())
		return (std::cerr << "Error: No numbers received" << std::endl, 1);

	std::cout << std::endl;
	std::cout << "BEFORE: ";
	for (size_t i = 0; i < subStringVector.size(); i++)
		std::cout << subStringVector[i] << " ";
	std::cout << std::endl << std::endl;

	for (size_t i = 0; i < subStringVector.size(); i++)
		vector.push_back(std::atoi(subStringVector[i].c_str()));
	for (size_t i = 0; i < vector.size(); i++)
		list.push_back(vector[i]);

	std::vector<int> checkedElements;
	for (std::vector<int>::iterator it = vector.begin(); it != vector.end(); it++) 
	{
		if (std::find(checkedElements.begin(), checkedElements.end(), *it) == checkedElements.end())
			return (std::cerr << "Error: Repeated numbers => " << *it << std::endl, 1);
		checkedElements.push_back(*it);
	}
	return (0);
};

void	PmergeMe::sort()
{
	clock_t	start;
	clock_t	end;
	double	vector_time;
	double	list_time;

	std::vector<int> tmp_vector = vector;
	vector.clear();
	start = clock();
	sortMergeInsertVector(tmp_vector);
	end = clock();
	vector_time = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1e6;

	std::cout << "AFTER (vector): ";
	for (size_t i = 0; i < vector.size(); i++)
		std::cout << vector[i] << " ";
	std::cout << std::endl;
	std::cout << "Time to process a range of " << vector.size() << " elements with std::vector => " << vector_time << " µs" << std::endl;
	std::cout << std::endl;

	std::list<int> tmp_list = list;
	list.clear();
	start = clock();
	sortMergeInsertList(tmp_list);
	end = clock();
	list_time = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1e6;

	std::cout << "AFTER (list): ";
	for (std::list<int>::iterator it = list.begin(); it != list.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	std::cout << "Time to process a range of " << list.size() << " elements with std::list => " << list_time << " µs" << std::endl;
	std::cout << std::endl;
}

void	PmergeMe::sortMergeInsertVector(std::vector<int> &cont)
{	
	std::vector<int> smaller;
	std::vector<int> bigger;
	std::vector<int>::iterator it = cont.begin();

	if (cont.size() <= 1)
	{
		vector.insert(vector.end(), cont.begin(), cont.end());
		return;
	}
	while (it != cont.end())
	{
		std::vector<int>::iterator first = it;
		std::vector<int>::iterator second = it;
		second++;
		if (second != cont.end())
		{
			(*first < *second) ? smaller.push_back(*first) : bigger.push_back(*first);
			(*first < *second) ? bigger.push_back(*second) : smaller.push_back(*second);
			it = ++second;
		}
		else
		{
			bigger.push_back(*first);
			break;
		}
	}
	sortMergeInsertVector(bigger);

/* 	for (std::vector<int>::iterator it = smaller.begin(); it != smaller.end(); it++)
		InsertVector(bigger, *it); */	
	
	vector.insert(vector.end(), smaller.begin(), smaller.end());

	cont = bigger;
	insertionSortVector(vector);
}

void PmergeMe::insertionSortVector(std::vector<int>& vec) 
{
    for (size_t i = 1; i < vec.size(); ++i) {
        int key = vec[i];
        size_t j = i;
        while (j > 0 && vec[j - 1] > key) {
            vec[j] = vec[j - 1];
            --j;
        }
        vec[j] = key;
    }
}

void	PmergeMe::sortMergeInsertList(std::list<int> &cont)
{	
	std::list<int> smaller;
	std::list<int> bigger;
	std::list<int>::iterator it = cont.begin();

	if (cont.size() <= 1)
	{
		list.insert(list.end(), cont.begin(), cont.end());
		return;
	}
	while (it != cont.end())
	{		
		std::list<int>::iterator first = it;
		std::list<int>::iterator second = it;
		second++;
		if (second != cont.end())
		{
			(*first < *second) ? smaller.push_back(*first) : bigger.push_back(*first);
			(*first < *second) ? bigger.push_back(*second) : smaller.push_back(*second);
			it = ++second;
		}
		else
		{
			bigger.push_back(*first);
			break;
		}
	}
	sortMergeInsertList(bigger);

/* 	for (std::list<int>::iterator it = smaller.begin(); it != smaller.end(); it++)
		std::cout << "smaller = " << *it << " ";
	std::cout << std::endl;
 */
	list.insert(list.end(), smaller.begin(), smaller.end());

/* 	for (std::list<int>::iterator it = list.begin(); it != list.end(); it++)
		std::cout << "list = " << *it << " ";
	std::cout << std::endl;
	std::cout << std::endl;	 */
	
	cont = bigger;
	insertionSortList(list);
}

void PmergeMe::insertionSortList(std::list<int>& lst) 
{
    bool swapped = true;
    while (swapped) 
	{
        swapped = false;
        std::list<int>::iterator it1 = lst.begin();
        std::list<int>::iterator it2 = ++lst.begin();
        
        while (it2 != lst.end()) 
		{
            if (*it1 > *it2) 
			{
                std::swap(*it1, *it2);
                swapped = true;
            }
            ++it1;
            ++it2;
        }
    }
}
