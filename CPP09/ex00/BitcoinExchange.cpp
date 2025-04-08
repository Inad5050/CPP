#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	std::cout << "BitcoinExchange default constructor called" << std::endl;
	openData(csvFile);
}

BitcoinExchange::BitcoinExchange(const char* inputFile)
{
	std::cout << "BitcoinExchange constructor called" << std::endl;
	openData(csvFile);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other)
{
	std::cout << "BitcoinExchange copy constructor called" << std::endl;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{
	std::cout << "BitcoinExchange copy operator called" << std::endl;
	if (this != &other)
	{


	}
	return (*this);
}

BitcoinExchange::~BitcoinExchange()
{
	std::cout << "BitcoinExchange destructor called" << std::endl;
}

void	openData(const char* csvFile)
{
	std::cout << "BitcoinExchange openFile() called" << std::endl;

	std::string csvDataBase;
	std::string line;
	std::cout << "Give me a CSV database" << std::endl;
	if (!std::getline(std::cin, csvDataBase))
		throw std::out_of_range("Invalid csvFile:" + csvFile);
	std::ifstream file(csvDataBase.c_str()); //podemos usar el constrcutor de ifstream o open() para abrir el archivo
	if (!file)
		throw std::out_of_range("Couldn't open file:" + csvFile);
	while(std::getline(file, line))
	{
		while(std::getline(line, csvData))






	}

	file.close();
}