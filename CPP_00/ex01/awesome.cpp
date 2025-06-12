/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Awesome.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 05:30:19 by bouhammo          #+#    #+#             */
/*   Updated: 2025/03/10 05:30:34 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.h"
#include "PhoneBook.h"

int main()
{
	PhoneBook phone;
	std::string  str ;

	while (true)
	{
		if (std::cin.eof())
			exit(0);
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