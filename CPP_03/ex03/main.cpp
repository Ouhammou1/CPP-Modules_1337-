/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 03:49:23 by bouhammo          #+#    #+#             */
/*   Updated: 2025/04/05 22:40:06 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <iostream>

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap ft1;
    std::cout << std::endl;

    DiamondTrap ft2("Carlo Ancelotti");
    std::cout << std::endl;

    DiamondTrap ft3 = ft2;
    std::cout << std::endl;

    DiamondTrap ft4;
    ft4 = ft2;
    std::cout << std::endl;


	ft2.attack("Pep guardiola");
	ft2.beRepaired(87);
    std::cout << std::endl;

    ft2.whoAmI();
    std::cout << std::endl;

    return 0;
}
