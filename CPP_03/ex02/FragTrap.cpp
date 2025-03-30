/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 03:53:48 by bouhammo          #+#    #+#             */
/*   Updated: 2025/03/30 04:58:50 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap() : ClapTrap() 
{
	std::cout << "Default FragTrap constructor called" << std::endl;
	this->hitPoint = 100;
	this->enePoint = 100;
	this->attdamage  = 30;
}
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Parameterized FragTrap constructor called "  << std::endl;
	this->hitPoint = 100;
	this->enePoint = 100;
	this->attdamage  = 30;
}
FragTrap::FragTrap(const FragTrap &original) :  ClapTrap(original)
{
	std::cout << "Copy constructor of the ScavTrap is called " << std::endl;
}
FragTrap& FragTrap::operator=(const FragTrap &original)
{
	std::cout << "Copy assignment operator of the FragTrap is called." << std::endl;
	if(this != &original)
	{
		ClapTrap::operator=(original);
	}
	return *this;
}
FragTrap::~FragTrap()
{
	std::cout << "The destructor of the FragTrap is called " << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap is asking for a high five!" << std::endl;
}
	