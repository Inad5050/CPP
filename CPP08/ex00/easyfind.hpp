#pragma once
#include <iostream>
#include <algorithm>
#include <vector>

/* template <typename T>
typename T::iterator easyfind(T& container, int nmb)
{
	typename T::iterator it = std::find(container.begin(), container.end(), nmb);
	std::cout << "OLA " << *it << std::endl;
	if (it == container.end())
	{
		std::cout << "element not found" << std::endl;
		return(it);
	}
	else
		return(it);
}; */


template <typename T>
int easyfind(T container, int nmb)
{
	typename T::iterator it = std::find(container.begin(), container.end(), nmb);
	if (it == container.end())
		throw std::exception();
	else
		return(*it);
};
