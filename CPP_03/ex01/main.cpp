/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 04:13:33 by bouhammo          #+#    #+#             */
/*   Updated: 2025/03/30 02:19:15 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ScavTrap.hpp"

int  main()
{

	ScavTrap obj("Robot 1");

	obj.display();

	obj.guardGate();

	return 0;
}