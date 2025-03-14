/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 11:38:14 by bouhammo          #+#    #+#             */
/*   Updated: 2025/03/11 19:36:41 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_HPP
#define HUMANA_HPP

#include  "Weapon.hpp"

class HumanA
{
private:
	Weapon 			&weapon;
	std::string 	name;
public:
	HumanA(Weapon &weapon , std::string name) ;
	~HumanA();

	
	void attack();
};




#endif
