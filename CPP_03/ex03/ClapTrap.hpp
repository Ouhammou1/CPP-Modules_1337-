/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 03:35:41 by bouhammo          #+#    #+#             */
/*   Updated: 2025/04/04 22:14:33 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef   CLAPTRAP_HH
#define  CLAPTRAP_HH

#include <iostream>


class ClapTrap
{
protected:
	std::string name;
	int hitPoint ;
	int enePoint ;
	int attdamage ;

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &original);
	ClapTrap& operator=(const ClapTrap &original);
	~ClapTrap();

	void 	attack(const std::string& target);
	void 	takeDamage(unsigned int amount);
	void 	beRepaired(unsigned int amount);

};






#endif
