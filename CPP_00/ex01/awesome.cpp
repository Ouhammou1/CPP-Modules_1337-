#include <iostream>
#include "Contact.h"
#include "PhoneBook.h"

int main()
{
	PhoneBook phone;
	std::string  str ;

	while (true)
	{
		std::cout << "Enter (ADD, SEARCH or  EXIT): " << std::endl;
	    std::getline(std::cin , str);

		if (str == "ADD")
		{
			phone.AddContact();
		}
		if(str == "SEARCH")
		{
			phone.displayContacts();
		}
		else if(str == "EXIT")
			exit(0);
	}
	return 0;
}