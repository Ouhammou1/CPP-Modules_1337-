/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 04:13:23 by bouhammo          #+#    #+#             */
/*   Updated: 2025/03/30 02:14:07 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :  name("name") , hitPoint(10), enePoint(10), attdamage(0)
{
	std::cout << "Default ClapTrap constructor of the ClapTrap called" << std::endl;
}
ClapTrap::ClapTrap(std::string name) :  name(name) , hitPoint(10), enePoint(10), attdamage(0)
{
	std::cout << "Parameterized ClapTrap constructor of the ClapTrap called for "  << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "The destructor of the ClapTrap is called " << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &original)
{
	std::cout << "Copy constructor of the ClapTrap is called " << std::endl;
	name = original.name;
	hitPoint = original.hitPoint;
	enePoint = original.enePoint;
	attdamage = original.attdamage;
}
ClapTrap& ClapTrap::operator=(const ClapTrap &original)
{
	std::cout << "Copy assignment operator of the ClapTrap is called." << std::endl;
	if(this != &original)
	{
		name = original.name;
		hitPoint = original.hitPoint;
		enePoint = original.enePoint;
		attdamage = original.attdamage;
	}
	return *this;
}


void 	ClapTrap::attack(const std::string& target)
{
	if(hitPoint == 0 )
	{
		std::cerr << "Error ... " << name << " has no Hit Points left and can't attack!" << std::endl;
		return;
	}
	if(enePoint == 0)
	{
		std::cerr << "Error ... " << name << " has no Energy Points left and can't attack!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << name << " attacks " << target 
	<< " causing " << attdamage << " points of damage!"<< std::endl;
	enePoint--;
}
void 	ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoint == 0)
	{
		std::cout << "ClapTrap " << name << " is already at 0 HP and can't take more damage!" << std::endl;
		return;
	}
	if ( hitPoint - amount   < 0  )
	{
		hitPoint = 0;
	}
	else
	{
		hitPoint =  hitPoint - amount;
	}
	std::cout << "ClapTrap " << name << " takes " << hitPoint << " points of damage!" << std::endl;
}
void 	ClapTrap::beRepaired(unsigned int amount)
{
	if(hitPoint == 0)
	{
		std::cerr << "Error ... " << name << " has no Hit Points left and can't repair!" << std::endl;
		return ;
	}
	if(enePoint == 0)
	{
  		std::cerr << "Error ... " << name << " has no Energy Points left and can't repair!" << std::endl;
		return ;
	}
	hitPoint  = hitPoint + amount;
	enePoint--;

	std::cout << "ClapTrap " << name << " repairs itself, recovering " << amount
	<< " hit points remaining :" << hitPoint << std::endl;
}