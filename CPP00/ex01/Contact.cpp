#include "Contact.hpp"

Contact::Contact() //constructor
{}

Contact::~Contact() //destructor
{}

void	Contact::set_contact(std::string f_name, std::string last_n, std::string nick, std::string phone, std::string secret)
{
	_first_name = f_name;
	_last_name = last_n;
	_nickname = nick;
	_phone_number = phone;
	_darkest_secret = secret;
}

int		Contact::preview(int	index) const
{
	if (index > MAX_CONTACTS)
		return (std::cout << "Incorrect index" << std::endl, 1);
	std::cout	<< "         " << index << "|"
				<< set_size(_first_name) << truncate(_first_name) << "|"
				<< set_size(_last_name) << truncate(_last_name) << "|"
				<< set_size(_nickname) << truncate(_nickname) << "|" << std::endl;
	return (0);
}

int		Contact::view_contact(int index) const
{
	if (index > MAX_CONTACTS)
		return (std::cout << "Incorrect index" << std::endl, 1);
	std::cout << "First Name: " << _first_name << std::endl;
	std::cout << "Last Name: " << _last_name << std::endl;
	std::cout << "Nickname: " << _nickname << std::endl;
	std::cout << "Phone Number: " << _phone_number << std::endl;
	std::cout << "Darkest Secret: " << _darkest_secret << std::endl;
	return (0);
}

std::string	Contact::set_size(std::string str1) const
{
	std::string str2;
	int	dif = 10 - str1.length();
	return (dif > 0) ? (str2.append(dif, ' ')) : str2;
}

std::string Contact::truncate(std::string str) const
{
	return (str.length() > 10) ? (str.substr(0, 9) + ".") : str;
}
