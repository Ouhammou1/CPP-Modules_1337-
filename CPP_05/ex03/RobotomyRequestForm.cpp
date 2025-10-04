/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 12:25:42 by bouhammo          #+#    #+#             */
/*   Updated: 2025/09/25 12:15:04 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm" , false , 72, 137) , target("")
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}
RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm" , false , 72, 137) , target(target)
{
    
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other): AForm(other) , target(other.target)
{
        
}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
    if(this != &other)
    {
        AForm::operator=(other);
        target = other.target;
    }
    return *this;
}


std::string    RobotomyRequestForm::GetTarget()  const
{
    return target;
}

void            RobotomyRequestForm::executeAction(const Bureaucrat& bure) const 
{
    if(this->GetIsSigned() == false)
        throw AForm::FormNotSignedExcption();
    if(bure.getGrade() > this->GetExecuteGrade() )
        throw AForm::GradeTooLowException();
        
    std::srand(std::time(0));
    int nbr = std::rand() ;
    if( nbr %2 == 0)
        std::cout << target <<" has been robotomized successfully "<< std::endl;
    else
        std::cout << "The robotomy of " << target << " failed. " << std::endl;
        
}

