/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 05:31:40 by bouhammo          #+#    #+#             */
/*   Updated: 2025/03/17 02:09:17 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for" << std::endl;
	std::cout << "my 7XL-double-cheese-triple-pickle-specialketchup burger. " << std::endl;
	std::cout << "I really do!" << std::endl;
}
void Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money."  << std::endl;
	std::cout << "You didn’t putenough bacon in my burger!"  << std::endl;
	std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout <<  "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years, whereas you started working" << std::endl;
	std::cout << "here just last month." << std::endl;
}
void Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout <<  "This is unacceptable!" << std::endl;
	std::cout << "I want to speak to the manager now." << std::endl;
}


void 	Harl::complain(std::string level)
{
	Harl harl;
	std::string str[] = {"DEBUG" , "INFO" , "WARNING" ,"ERROR" };
	
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		if (level == str[i])
		{
			break;
		}
	}
	switch (i)
	{
	case 0:
		harl.debug();
	
	case 1:
		harl.info();
	
	case 2:
		harl.warning();

	case 3:
		harl.error();
		break;
	default:
		std::cout<< "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
}

