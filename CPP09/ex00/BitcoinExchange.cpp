#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	std::cout << "BitcoinExchange default constructor called" << std::endl;
	openData();
}

BitcoinExchange::BitcoinExchange(const char* inFile)
{
	std::cout << "BitcoinExchange constructor called" << std::endl;
	openData();
	openInfile(inFile);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other)
{
	std::cout << "BitcoinExchange copy constructor called" << std::endl;
	myMap = other.myMap;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{
	std::cout << "BitcoinExchange copy operator called" << std::endl;
	if (this != &other)
	{
		myMap = other.myMap;
	}
	return (*this);
}

BitcoinExchange::~BitcoinExchange()
{
	std::cout << "BitcoinExchange destructor called" << std::endl;
}

void	BitcoinExchange::openData()
{
	std::cout << "BitcoinExchange openData() called" << std::endl;

	std::string csvFile;
	std::string line;
	std::string key;
	std::string data;
	float data_nmb;

	std::ifstream file("./data.csv");
	if (!file)
	{
		std::cout << "Give me a CSV database" << std::endl;
		if (!std::getline(std::cin, csvFile))
			throw std::out_of_range(std::string("Invalid csvFile:" + csvFile).c_str());
		std::ifstream file(csvFile.c_str()); //podemos usar el constrcutor de ifstream o open() para abrir el archivo
		if (!file)
			throw std::out_of_range(std::string("Couldn't open file:" + csvFile).c_str());
	}
	while(std::getline(file, line))
	{
		std::stringstream sstream(line);
		if (getline(sstream, key, ',') && getline(sstream, data))
		{
			std::stringstream data_stream(data);
			data_stream >> data_nmb;
			myMap[key] = data_nmb;
			/* std::cout << "myMap[key] = " << myMap[key] << "key " << key << std::endl; */
		}
		else
			throw std::out_of_range("Invalid values in:" + csvFile);
	}
	file.close();
}

void BitcoinExchange::openInfile(const char* inFile)
{
	std::string line;
	std::string date;
	std::string value;
	float valueNmb;
	
	std::cout << "BitcoinExchange openInfile() called" << std::endl;

	std::ifstream file(inFile);
	if (!file)
		throw std::out_of_range(std::string("Couldn`t open: " + std::string(inFile)).c_str());
	if (!getline(file, line))
		throw std::out_of_range(std::string("Couldn't read: " + std::string(inFile)).c_str());
	if (line.compare("date | value"))
		throw std::out_of_range("Invalid first line");
	while (getline(file, line))
	{
		std::stringstream stream(line);
		if (getline(stream, date, '|') && getline(stream, value))
		{
			date.erase(10, 1); //elimina el espacio al final de la fecha
			std::stringstream valueNumber(value);
			valueNumber >> valueNmb;
			/* std::cout << "myMap[date] = " << myMap[date] << "date " << date << std::endl; */
			if (!parseDate(date) && !parseValue(valueNmb))
				std::cout << date << " => " << valueNmb << " = " << valueNmb * myMap[date] << std::endl;
		}
	}
	file.close();
}

int BitcoinExchange::parseDate(std::string date)
{
	for (size_t i = 0; i < date.size(); i++)
	{
		if ((i == 0 || i == 1 || i == 2 || i == 3 || i == 5 || i == 6 || i == 8 || i == 9) && !isdigit(date[i]))
			return (std::cout << "Error: Invalid date => " << date << std::endl, 1);
		if ((i == 4 || i == 7) && date[i] != '-')
			return (std::cout << "Error: Invalid date => " << date << std::endl, 1);
	}
	std::stringstream streamMonth(date.substr(5, 2));
	int intMonth;
	streamMonth >> intMonth;
	if (intMonth < 0 || intMonth > 12)
		return (std::cout << "Error: Invalid month => " << date << std::endl, 1);
	std::stringstream streamWeek(date.substr(8, 2));
	int intWeek;
	streamWeek >> intWeek;
	if (intWeek < 0 || intWeek > 31)
		return (std::cout << "Error: Invalid day => " << date << std::endl, 1);
	return (0);
}

int BitcoinExchange::parseValue(float value)
{
	if (value < 0)
		return (std::cout << "Error: negative number => " << value << std::endl, 1);
	if (value > 1000)
		return (std::cout << "Error: too large a number => " << value << std::endl, 1);
	return (0);
}