/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 11:42:03 by bouhammo          #+#    #+#             */
/*   Updated: 2025/05/18 12:16:28 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include  <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{


    // AForm U;
    RobotomyRequestForm obj("target ");
    obj.executeAction();
    return 0;
}