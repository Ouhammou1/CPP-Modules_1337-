/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 14:03:13 by bouhammo          #+#    #+#             */
/*   Updated: 2025/01/03 11:30:03 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
#define PHONE_BOOK_H
#include <iostream>
#include "Contact.h"




class PhoneBook
{
private:
	Contact ary_contact[8];
	int index;
	int Max_Contacts;
public:
	// void set_ary_contact();
	int get_index();
	void AddContact();
	void displayContacts();
	std::string trancat(std::string str);
	void	PrintFerstLine();
	// bool    isNumber(std::string   &string_nbr);



	PhoneBook();
	~PhoneBook();
};

// static std::string trancat(std::string str);
// static std::string trancat(std::string str);

// std::string PhoneBook::trancat(std::string str);

#endif
