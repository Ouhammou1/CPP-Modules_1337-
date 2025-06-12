/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 12:05:34 by bouhammo          #+#    #+#             */
/*   Updated: 2025/05/10 21:56:10 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{

    Bureaucrat bob1("bob1" , 75);
    Bureaucrat bob2("bob2" , 7);
    Form firstForm("Leave Request" , 0,50,30);
    Form secondForm("Top Secrect" , 0, 1, 1);


    std::cout << bob1 << std::endl;
    std::cout << bob2 << std::endl;

    std::cout << firstForm << std::endl;
    std::cout << secondForm << std::endl;

    bob1.signForm(firstForm);
    std::cout << firstForm << std::endl;

    bob1.signForm(secondForm);
    std::cout << secondForm << std::endl;
    
    bob2.signForm(firstForm);
    std::cout << firstForm << std::endl;



    

    return 0;
}