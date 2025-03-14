/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 05:31:40 by bouhammo          #+#    #+#             */
/*   Updated: 2025/03/14 05:34:46 by bouhammo         ###   ########.fr       */
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
	std::cout << "I love having extra bacon for" << std::endl;
	std::cout << "my 7XL-double-cheese-triple-pickle-specialketchup burger. " << std::endl;
	std::cout << "I really do!" << std::endl;
}
void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money."  << std::endl;
	std::cout << "You didn’t putenough bacon in my burger!"  << std::endl;
	std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning(void)
{
	std::cout <<  "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years, whereas you started working" << std::endl;
	std::cout << "here just last month." << std::endl;
}
void Harl::error(void)
{
	std::cout <<  "This is unacceptable!" << std::endl;
	std::cout << "I want to speak to the manager now." << std::endl;
}


void 	Harl::complain(std::string level)
{
	(void)level;
	Harl harl;

	harl.debug();
	
}

