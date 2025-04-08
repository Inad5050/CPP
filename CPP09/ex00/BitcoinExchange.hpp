#include <iostream>
#include <string>
#include <fstreams>
#include <vector>

class BitcoinExchange
{
	private:
	/* vector<std::string> data; */
	std::map<int, std::vector<std::string>>
	
	public:
	BitcoinExchange();
	BitcoinExchange(const char* csvFile);
	BitcoinExchange(const BitcoinExchange& other);
	BitcoinExchange& operator=(const BitcoinExchange& other);
	~BitcoinExchange();

	openData(const char* csvFile);










};
