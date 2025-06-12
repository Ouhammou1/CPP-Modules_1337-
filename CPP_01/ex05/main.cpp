/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 19:52:36 by bouhammo          #+#    #+#             */
/*   Updated: 2025/03/17 02:19:42 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

int main()
{
	std::cout << "Please enter one of the following options: DEBUG, INFO, WARNING, ERROR: " << std::endl ;
	std::string level;
	std::cin >> level;
	
	std::string str[] ={"DEBUG" , "INFO" , "WARNING" , "ERROR"};

	int count = 0;
	for (int i = 0; i < 4; i++)
	{
		if(str[i] != level)
			count ++;
	}
	if(count == 4)
	{
		std::cerr  << "Invalid Input!" << std::endl;
		return 0;
	}
	Harl obj;
	obj.complain(level);
}