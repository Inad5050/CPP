#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <map>
#include <sstream>
#include <cctype>
#include <cstdlib>
#include <iomanip>

class BitcoinExchange
{
	private:
	std::map<std::string, float> myMap;
	
	public:
	BitcoinExchange();
	BitcoinExchange(const char* inFile);
	BitcoinExchange(const BitcoinExchange& other);
	BitcoinExchange& operator=(const BitcoinExchange& other);
	~BitcoinExchange();

	void openData();
	void openInfile(const char* inFile);
	int parseDate(std::string key);
	int parseValue(float data);
};

