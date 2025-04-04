/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 03:49:23 by bouhammo          #+#    #+#             */
/*   Updated: 2025/04/04 22:12:55 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <iostream>

#include "DiamondTrap.hpp"

int main()
{
    std::cout << "GOOD  " << std::endl;

    DiamondTrap obj("mohmad");



    obj.display();
    DiamondTrap obj1;
    
    obj1 = obj;
    obj1.display();
    // obj1.display1();
    // obj.display1();

    // obj.attack("nice");

    // obj.whoAmI();
    // ScavTrap  obbj;
    // ClapTrap *ptr;

    // ptr = &obbj;

    // ptr->attack("Roobot ");


    
    return 0;
}
