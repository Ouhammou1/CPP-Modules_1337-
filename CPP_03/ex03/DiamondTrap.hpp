/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 11:09:48 by bouhammo          #+#    #+#             */
/*   Updated: 2025/04/04 22:16:10 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef   DIAMONDTRAP_H
#define   DIAMONDTRAP_H

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
class DiamondTrap : public ScavTrap  , public FragTrap
{
private:
	std::string name;
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &other);
	DiamondTrap& operator=(const DiamondTrap &other);
	~DiamondTrap();

	void whoAmI();

			void display()
			{
				std::cout << "\n\n";
				std::cout <<  " -----> name = "     << name << std::endl;
				std::cout <<  " -----> name = "     << ClapTrap::name << std::endl;
				std::cout <<  " -----> hitPoint = " << hitPoint << std::endl;
				std::cout <<  " -----> enePoint = " << enePoint << std::endl;
				std::cout <<  " -----> attdamage = " << attdamage << std::endl;
				std::cout << "\n\n";
			}
};

#endif