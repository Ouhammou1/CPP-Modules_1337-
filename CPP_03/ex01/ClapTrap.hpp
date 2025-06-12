/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 04:14:17 by bouhammo          #+#    #+#             */
/*   Updated: 2025/03/29 04:53:59 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ClapTrap_H
#define ClapTrap_H

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
