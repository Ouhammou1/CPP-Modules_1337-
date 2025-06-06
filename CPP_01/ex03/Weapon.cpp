/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 11:18:31 by bouhammo          #+#    #+#             */
/*   Updated: 2025/03/21 03:53:30 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Weapon.hpp"


Weapon::Weapon(const std::string &type) : type(type)
{
}

Weapon::~Weapon()
{
}
void	Weapon::setType(std::string type)
{
	this->type = type;
}

const std::string& Weapon::getType() 
{
	return type;
}