#pragma once

#include <iostream>
#include <limits> //std::numeric_limits<t>
#include <string> //std::string
#include <stdlib.h> //exit

#define MAX_CONTACTS 8

class Contact 
{
	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;

		std::string	set_size(std::string str1) const;
		std::string truncate(std::string str) const;

	public:
		Contact();
		~Contact();

		void	set_contact(std::string f_name, std::string last_n, std::string nick, std::string phone, std::string secret);
		int		preview(int	index) const;
		int		view_contact(int index) const;
};

/* #include "Contact.hpp"
#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	PB;
	std::string	input;

	std::cout <<	std::endl <<
					"//////////////////////////" << std::endl <<
					"///     PHONE BOOK     ///" << std::endl <<
					"//////////////////////////" << std::endl << std::endl;

	while(1)
	{
		if (std::cin.eof())
			return(std::cout << "EOF: Input stream closed" << std::endl, 0);
		std::cout << "Enter command (ADD, SEARCH or EXIT): " << std::endl;
		if (!std::getline(std::cin, input))
			break;
		else if (input == "ADD")
			(PB.add_contact());
		else if (input == "SEARCH")
		{
			if (PB.search_contact())
				continue;
		}
		else if (input == "EXIT")
			break;
		else
			std::cout << "Incorrect command" << std::endl;
	}
	return (0);
} */