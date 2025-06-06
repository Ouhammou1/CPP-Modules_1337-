/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 04:13:37 by bouhammo          #+#    #+#             */
/*   Updated: 2025/04/05 12:42:06 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Default ScavTrap constructor called" << std::endl;
	this->hitPoint = 100;
	this->enePoint = 50;
	this->attdamage = 30;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Parameterized ScavTrap constructor called "  << std::endl;
	this->hitPoint = 100;
	this->enePoint = 50;
	this->attdamage = 30;
	
}
ScavTrap::ScavTrap(const ScavTrap &original): ClapTrap(original)
{
	std::cout << "Copy constructor of the ScavTrap is called " << std::endl;
}
ScavTrap& ScavTrap::operator=(const ScavTrap &original)
{
	std::cout << "Copy assignment operator of the ScavTrap is called." << std::endl;
	if(this != &original)
	{
		ClapTrap::operator=(original);
	}
	return *this;
}
ScavTrap::~ScavTrap()
{
	std::cout << "The destructor of the ScavTrap is called " << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name << " is now in Gate Keeper mode!" << std::endl;
}
