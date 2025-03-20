#include "SedisForLosers.hpp"

std::string	replace(std::string fileName1, std::string str1, std::string str2)
{
	//we open the file, ifstream receives a const char* in CPP98, we can get a const char* from a std::string with string.c_str
	std::ifstream file1(fileName1.c_str());
	if (!file1)
		return (std::cerr << "Cannot open " << fileName1 << std::endl, "");

	 //we get a string with the contento of file1	
	std::string	line;
	std::string	file1_content;
	while (std::getline(file1, line))
		file1_content.append(line + '\n');

	//we find every instance of str1, clear it and susbstitute it with str2
	int	i = 0;
	while (i < static_cast<int>(file1_content.length()))
	{
		i = file1_content.find(str1, i);
		if (i == (int)std::string::npos) //when .find doesnt find its string it sets i to a huge value, usually -1 converted to unsigned
			break;
		file1_content.erase(i, str1.length());
		file1_content.insert(i, str2);
	}

	std::string		fileName2 = fileName1.append(".replace"); //we create a new file
	std::ofstream	file2(fileName2.c_str());
	if (!file2)
		return (std::cerr << "Cannot create " << fileName2 << std::endl, "");

	 //we copy the modified string to file2
	file2 << file1_content;

	file1.close();
	file2.close();
	return (fileName2);
}
