/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 11:26:10 by bouhammo          #+#    #+#             */
/*   Updated: 2025/09/19 11:26:11 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try{
  

        int grade = 12;

        Bureaucrat bure("brahim" , grade);
        std::cout << bure << std::endl << std::endl ;

        std::cout << "increment the grade " << std::endl;
        bure.increment();
        std::cout << bure << std::endl  << std::endl;

        std::cout << "decrement the grade " << std::endl;
        bure.decrement();
        std::cout << bure << std::endl << std::endl ;


    }
    catch(const std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    return 0;
}