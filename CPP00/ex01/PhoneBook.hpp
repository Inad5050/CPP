#pragma once

#include "Contact.hpp"

#define MAX_CONTACTS 8

class PhoneBook 
{
	private:
		Contact	contact_list[MAX_CONTACTS];
		int		index;
		int		contact_count;

		int	add_contact_aux(std::string name, std::string& str);

	public:
		PhoneBook();
		~PhoneBook();
		int add_contact();
		int search_contact() const;
};
