/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 12:05:34 by bouhammo          #+#    #+#             */
/*   Updated: 2025/05/07 12:09:50 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"


int main()
{

   try{ 
        Bureaucrat obj("BRAHIM ", 1);
        std::cout << obj << std::endl;
        obj.increment();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    try
    {
        Bureaucrat obj1("Amine" , 150);
        std::cout << obj1 << std::endl;
        obj1.decrement();
        std::cout << obj1 << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    try
    {
        Bureaucrat  obj3("ROMYO " , 89);
        std::cout << obj3 << std::endl;
        obj3.decrement();
        std::cout << obj3 << std::endl;
        obj3.increment();
        obj3.increment();
        obj3.increment();
        std::cout << obj3 << std::endl;
        obj3.decrement();
        std::cout << obj3 << std::endl;    
    }   
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
        
    return 0;
}