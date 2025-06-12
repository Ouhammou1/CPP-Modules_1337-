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
		int 		get_index();
		void 		AddContact();
		void 		displayContacts();
		std::string trancat(std::string str);
		void		PrintFerstLine();
		int			checkValid(std::string str);
		int 		checkIsNumber(std::string str );
		int         isNumber(std::string   &string_nbr);


		PhoneBook();
		~PhoneBook();
};


#endif
