/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 11:38:14 by bouhammo          #+#    #+#             */
/*   Updated: 2025/03/20 02:02:52 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_HPP
#define HUMANA_HPP

#include  "Weapon.hpp"

class HumanA
{
private:
	std::string 	name;
	Weapon 			&weapon;
public:
	HumanA(Weapon &weapon , std::string name);
	~HumanA();

	
	void attack();
};




#endif
