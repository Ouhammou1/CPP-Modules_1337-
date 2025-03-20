/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 11:55:06 by bouhammo          #+#    #+#             */
/*   Updated: 2025/03/20 03:34:37 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name) , weapon(nullptr)
{
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
	std::cout << name << " attacks with their ";
	if(weapon != nullptr)
		std::cout << weapon->getType() << std::endl;
	else
		std::cout << std::endl;
}

void HumanB::setWeapon(Weapon &weaopn)
{
	this->weapon = &weaopn;
}



