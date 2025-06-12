/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 21:08:51 by bouhammo          #+#    #+#             */
/*   Updated: 2025/03/11 02:20:41 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
	Zombie *Zom  = new Zombie(name);
	return Zom;
}

