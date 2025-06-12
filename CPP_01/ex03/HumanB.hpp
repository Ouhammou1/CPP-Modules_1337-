/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 10:25:11 by bouhammo          #+#    #+#             */
/*   Updated: 2025/03/20 00:26:34 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef HUMANB_HPP
#define HUMANB_HPP

#include  "Weapon.hpp"

class HumanB
{
private:
	std::string name;
	Weapon	*weapon;
public:
	HumanB(std::string name);
	~HumanB();
	
	void 	setWeapon(Weapon &weapon);
	void 	attack();
};





#endif