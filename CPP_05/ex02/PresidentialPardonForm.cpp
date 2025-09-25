/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 13:27:20 by bouhammo          #+#    #+#             */
/*   Updated: 2025/09/25 13:43:09 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::~PresidentialPardonForm()
{
}
PresidentialPardonForm::PresidentialPardonForm() :AForm("PresidentialPardonForm" , false , 72 , 45)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm" ,  false ,72 , 45) , target(target)
{
    
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) :AForm(other) , target(other.target)
{
    
}
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
    if (this != &other)
    {
        AForm::operator=(other);
        target = other.target;
    }
    return *this;
}


std::string     PresidentialPardonForm::GetTarget() const 
{
    return target;
}

void            PresidentialPardonForm::executeAction(const Bureaucrat& bure) const 
{
    if(this->GetIsSigned() == false)
        throw AForm::FormNotSignedExcption();
    if(bure.getGrade() > this->GetExecuteGrade() )
        throw AForm::GradeTooLowException();

    std::cout <<this->GetTarget()  << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}







