/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 04:39:56 by bouhammo          #+#    #+#             */
/*   Updated: 2025/03/29 04:02:32 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

int  main()
{
	ClapTrap clap1("Robot 1");
	ClapTrap clap2("Robot 2");

	std::cout  << "Attacks " << std::endl << std::endl;
	clap1.attack("Robot 2");
	clap2.attack("Robot 1");

	std::cout  << "Taking Damage " << std::endl << std::endl;
	clap1.takeDamage(5);
	clap2.takeDamage(6);

	std::cout  << "Energy Depletion " << std::endl << std::endl;
	for (int i = 0; i < 11; i++)
	{
		clap2.attack("Robot 1");
	}

	std::cout  << "Final " << std::endl << std::endl;
	clap1.takeDamage(2);
	clap2.beRepaired(2);

	return 0;
}