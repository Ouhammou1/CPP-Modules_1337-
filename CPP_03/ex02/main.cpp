/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 03:49:23 by bouhammo          #+#    #+#             */
/*   Updated: 2025/04/05 22:33:54 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <iostream>

#include "FragTrap.hpp"

int main()
{
    FragTrap ft1;
    std::cout << std::endl;

    FragTrap ft2("Carlo Ancelotti");
    std::cout << std::endl;

    FragTrap ft3 = ft2;
    std::cout << std::endl;

    FragTrap ft4;
    ft4 = ft2;
    std::cout << std::endl;

    ft2.highFivesGuys();
	ft2.attack("Pep guardiola");
	ft2.beRepaired(87);
    std::cout << std::endl;

    return 0;
}
