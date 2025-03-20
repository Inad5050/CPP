#include "PhoneBook.hpp"

#define	MAX_CONTACTS 8

PhoneBook::PhoneBook() : index (0), contact_count (0)
{
	std::cout << "Type ADD to create a new contact" << std::endl;
	std::cout << "Type SEARCH to display a specific contact" << std::endl;
	std::cout << "Type EXIT to finish the program, contacts will be lost" << std::endl;
}

PhoneBook::~PhoneBook()
{}

int	PhoneBook::add_contact()
{	
	std::string	first_name, last_name, nickname, phone_number, darkest_secret;

	if (!add_contact_aux("first name", first_name))
		return (std::cout << "Contact info can't be empty" << std::endl, 1);
	if (!add_contact_aux("last name", last_name))
		return (std::cout << "Contact info can't be empty" << std::endl, 1);
	if (!add_contact_aux("nickname", nickname))
		return (std::cout << "Contact info can't be empty" << std::endl, 1);
	if (!add_contact_aux("phone number", phone_number))
		return (std::cout << "Contact info can't be empty" << std::endl, 1);
	if (!add_contact_aux("darkest secret", darkest_secret))
		return (std::cout << "Contact info can't be empty" << std::endl, 1);
	contact_list[index].set_contact(first_name, last_name, nickname, phone_number, darkest_secret);
	index = (index + 1) % MAX_CONTACTS;
	if (contact_count < MAX_CONTACTS)
		contact_count++;
	return (std::cout << "Contact added" << std::endl, 0);
}

//std::cin >> selected_index attempts to read a value from the input stream before checking if the end of the file (EOF) has been reached. Even if we call first for the eof evaluation
//std::numeric_limits: This indicates that we are using the numeric_limits template from the standard library.
//<std::streamsize>: This specifies that we are specializing the template for the type std::streamsize.
//::max(): This calls the member function max() of the specialization std::numeric_limits<std::streamsize>, which returns the maximum value that std::streamsize can hold.
	
int	PhoneBook::search_contact() const
{
	int	selected_index = -1;

	if (!contact_count)
		return (std::cout << "PhoneBook is empty" << std::endl, 1);
	for (int i = 0; i < MAX_CONTACTS; i++)
		contact_list[i].preview(i);
	std::cout << "Enter index for additional inAFormation" << std::endl;
	while (1)
	{
		if (!(std::cin >> selected_index))
		{
			if (std::cin.eof())
				return (1);
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Incorrect index" << std::endl;
		}
		else if (!(0 <= selected_index && selected_index < MAX_CONTACTS))
			std::cout << "Incorrect index" << std::endl;
		else
			break;
	}
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	contact_list[selected_index].view_contact(selected_index);
	return (0);
}

int	PhoneBook::add_contact_aux(std::string name, std::string& str)
{
	std::cout << "Enter " << name << std::endl;
	std::getline(std::cin, str);
	return (str.length());
}
