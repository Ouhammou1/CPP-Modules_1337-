/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 11:16:15 by bouhammo          #+#    #+#             */
/*   Updated: 2025/01/03 11:29:12 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.h"
#include <iomanip>

PhoneBook::PhoneBook()
{
	this->index = 0;
	this->Max_Contacts = 0;
}

PhoneBook::~PhoneBook()
{

}
int 	PhoneBook::get_index()
{
	return index;
}

std::string PhoneBook::trancat(std::string str)
{
	if(str.length() > 10)
	{
		return str.substr(0 , 9) + ".";
	}
	return str;
}
int		PhoneBook::checkValid(std::string str)
{
	if(str.empty())
		return 1;
	size_t i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\t')
			return 0;
		i++;
	}
	if (i == str.length())
		return 1;
	
	return 0;
}
int 	PhoneBook::checkIsNumber(std::string str )
{
	size_t  i = 0;
	while (i < str.length())
	{
		if(!isdigit(str[i]))
			return 1;
		i++;
	}
	return 0;
}
void PhoneBook::AddContact()
{

	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string  phone_number;
	std::string  darkest_secret;

	std::cout << "Enter First Name        :";
    std::getline(std::cin , first_name);
    if (checkValid(first_name) == 1) {
        std::cout << "Invalid first name!" << std::endl;
        return;
    }
	std::cout << "Enter Last_name         :";
	std::getline(std::cin , last_name );
	if (checkValid(last_name) == 1)
	{
        std::cout << "Invalid Last name!" << std::endl;
		return;
	}
	std::cout << "Enter Nickname          :";
	std::getline(std::cin , nickname );
	if (checkValid(nickname) == 1)
	{
        std::cout << "Invalid Nick name!" << std::endl;
		return;
	}
	std::cout << "Enter Phone number      :";
	std::getline(std::cin , phone_number );
	if (checkValid(phone_number) == 1 || checkIsNumber(phone_number) == 1)
	{
        std::cout << "Invalid Phone number!" << std::endl;
		return;
	}
	std::cout << "Enter Darkest secret    :";
	std::getline(std::cin , darkest_secret) ;
	if (checkValid(darkest_secret) == 1)
	{
        std::cout << "Invalid Darkest secret!" << std::endl;
		return;
	}
	this->ary_contact[index].set_first_name(first_name);
	this->ary_contact[index].set_last_name(last_name);
	this->ary_contact[index].set_nickname(nickname);
	this->ary_contact[index].set_phone_number(phone_number);
	this->ary_contact[index].set_darkest_secret(darkest_secret);
	index = (index  +  1) % 8 ;
	if(Max_Contacts < 8 )
		Max_Contacts++;
}

void		PhoneBook::PrintFerstLine()
{

	std::cout <<  std::setw(10) << trancat("Index") << " | ";
	std::cout  << std::setw(10) << trancat("First name") << "|";
	std::cout  << std::setw(10) << trancat("Last  name")<< "|";
	std::cout  << std::setw(10) << trancat("Nick  name") << std::endl;

	return;

}

int         PhoneBook::isNumber(std::string   &string_nbr)
{
    if(string_nbr.empty())
	{
        return  -1;
	}
    
	if(string_nbr.size() == 1)
	{
		if (string_nbr[0]>= '0' && string_nbr[0] <= '9')
			return string_nbr[0] - '0' ;		
	}
	return -1;
}
void 		PhoneBook::displayContacts()
{
	PrintFerstLine();
	for (int i = 0; i < Max_Contacts; i++)
	{
		std::cout <<  std::setw(10) << i << " | ";
		std::cout  << std::setw(10) << trancat(this->ary_contact[i].get_first_name()) << "|";
		std::cout  << std::setw(10) << trancat(this->ary_contact[i].get_last_name())<< "|";
		std::cout  << std::setw(10) << trancat(this->ary_contact[i].get_nickname()) << std::endl;
	}

	int  nbr;
	std::string string_nbr;
	std::cout << "Enter Index : ";
	std::getline(std::cin , string_nbr);

	nbr = isNumber(string_nbr);

	if (isNumber(string_nbr) == -1 )
	{
        std::cout << "Invalid input! Please enter a valid number." << std::endl;
		return ;
	}
	
	if ( nbr < 0 || nbr >= Max_Contacts)
	{
		std::cout << "Error: Index out of range!" << std::endl;
		return ;
	}
	for (int j = 0; j < Max_Contacts; j++)
	{
		if ( j == nbr)
		{
			std::cout << "First name      :"<< this->ary_contact[j].get_first_name() << std::endl;
			std::cout << "Last  name      :"<< this->ary_contact[j].get_last_name() << std::endl;
			std::cout << "Nick  name      :"<< this->ary_contact[j].get_nickname() << std::endl;
			std::cout << "Phone number    :"<< this->ary_contact[j].get_phone_number() << std::endl;
			std::cout << "Darkest secret  :"<< this->ary_contact[j].get_darkest_secret() << std::endl;
			return;
		}
	}
}


