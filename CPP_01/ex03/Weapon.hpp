/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 11:15:08 by bouhammo          #+#    #+#             */
/*   Updated: 2025/03/21 03:53:35 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
	std::string  type;
public:
	Weapon(const std::string &type);
	~Weapon();

	const std::string& getType() ;
	void 		setType(std::string type);

};


#endif

