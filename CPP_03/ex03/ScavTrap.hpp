/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 04:16:38 by bouhammo          #+#    #+#             */
/*   Updated: 2025/04/04 19:32:18 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SERENA_H
#define SERENA_H
#include <iostream>
#include  "ClapTrap.hpp"

class ScavTrap :virtual public ClapTrap
{
private:

public:
	ScavTrap(); 
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &original);
	ScavTrap& operator=(const ScavTrap &original);
	~ScavTrap();

	void 	attack(const std::string& target);
	void 	guardGate();
};






#endif