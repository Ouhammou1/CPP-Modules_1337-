/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 20:12:20 by bouhammo          #+#    #+#             */
/*   Updated: 2025/03/12 03:32:17 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	
}

Zombie::~Zombie()
{
	std::cout << name << ": is destroyed. " << std::endl;
}

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::SetName(std::string name)
{
	this->name = name;
}




