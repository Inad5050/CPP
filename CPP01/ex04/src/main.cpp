#include "SedisForLosers.hpp"

int	main(void)
{
	std::string	fileName;
	std::string	str1;
	std::string	str2;
	std::string	fileName2;
	std::string	line;

	std::cout << "Give me a fileName" << std::endl;
	if (!(std::getline(std::cin, fileName)))
		return (std::cerr << "Incorrect paramater, exiting." << std::endl, 1);
	std::cout << "Give me a string" << std::endl;
	if (!(std::getline(std::cin, str1)))
		return (std::cerr << "Incorrect paramater, exiting." << std::endl, 1);
	std::cout << "Give me another string" << std::endl;
	if (!(std::getline(std::cin, str2)))
		return (std::cerr << "Incorrect paramater, exiting." << std::endl, 1);

	fileName2 = replace(fileName, str1, str2);
	if (fileName2.empty())
		return (1);

	std::cout <<std::endl << std::endl;
	std::ifstream	file2(fileName2.c_str());
	if (!file2)
		return (std::cout << "Cannot open file2 in main" << std::endl, 1);
	while (getline(file2, line))
		std::cout << line << "\n";

	return (0);
}