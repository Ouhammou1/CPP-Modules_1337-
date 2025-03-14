/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 11:30:29 by bouhammo          #+#    #+#             */
/*   Updated: 2025/03/12 00:44:12 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "HumanA.hpp"


HumanA::HumanA(Weapon &weapon , std::string name) : weapon(weapon) , name(name)
{
	
 
}

HumanA::~HumanA()
{
	
}
void HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}