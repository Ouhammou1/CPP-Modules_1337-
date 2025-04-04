/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 04:13:33 by bouhammo          #+#    #+#             */
/*   Updated: 2025/04/04 22:39:11 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ScavTrap.hpp"

int  main()
{

	ScavTrap obj("Robot 1");


	// obj.display();

	ScavTrap obj1;

	obj1 = obj;
	// obj1.display();

	obj.guardGate();

	return 0;
}