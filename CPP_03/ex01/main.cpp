/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 04:13:33 by bouhammo          #+#    #+#             */
/*   Updated: 2025/04/05 15:20:50 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ScavTrap.hpp"

int  main()
{

	ScavTrap obj("Robot 1");


	obj.beRepaired(42);
	obj.takeDamage(6);
	obj.takeDamage(4);
	obj.attack("Robot 2");


	obj.guardGate();

	return 0;
}