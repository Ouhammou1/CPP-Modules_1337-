/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 11:13:36 by bouhammo          #+#    #+#             */
/*   Updated: 2025/05/18 12:21:37 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(  std::string target) :AForm("RobotomyRequestForm" ,0,72,45) , target(target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void   RobotomyRequestForm::executeAction()
{
    std::srand(std::time(0));
    int id = std::rand();
    if(id % 2 == 0)
        std::cout << "robotomy success "<< std::endl;
    else
        std::cout << "robotomy failed" << std::endl;

    return ;
}

std::string    RobotomyRequestForm::GetTarget()
{
    return this->target;
}
