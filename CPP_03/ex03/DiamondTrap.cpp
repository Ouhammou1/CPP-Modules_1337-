/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 11:19:37 by bouhammo          #+#    #+#             */
/*   Updated: 2025/04/05 13:32:39 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): name("def_clap_name") 
{
	 std::cout << "Default DiamondTrap constructor called." << std::endl;
	this->enePoint = 50;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name") , name(name)
{
	this->enePoint = 50;
	std::cout << "Parameterized DiamondTrap constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) :  name(other.name)
{
	*this = other;
	std::cout << "Copy constructor of the DiamondTrap is called." << std::endl;
}
DiamondTrap& DiamondTrap::operator=(const DiamondTrap &other)
{
	std::cout << "Copy assignment operator of the DiamondTrap is called." << std::endl;
	if(this != &other)
	{
		name = other.name;
		ClapTrap::operator=(other);
	}
	return *this;
}
DiamondTrap::~DiamondTrap()
{
	std::cout << "The destructor of the DiamondTrap is called." << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name is " << name << " ClapTrap name is "<< ClapTrap::name << std::endl;
}


