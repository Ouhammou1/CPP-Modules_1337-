/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 11:19:37 by bouhammo          #+#    #+#             */
/*   Updated: 2025/04/04 22:11:22 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): name("def") 
{
	this->enePoint = 50;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name") , name(name)
{
	this->enePoint = 50;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other)   , name(other.name)
{
}
DiamondTrap& DiamondTrap::operator=(const DiamondTrap &other)
{
	if(this != &other)
	{
		name = other.name;
		ClapTrap::operator=(other);
	}
	return *this;
}
DiamondTrap::~DiamondTrap()
{
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name is " << name << " ClapTrap name is "<< ClapTrap::name << std::endl;
}


