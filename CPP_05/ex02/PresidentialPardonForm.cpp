/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 12:21:41 by bouhammo          #+#    #+#             */
/*   Updated: 2025/05/18 12:26:14 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string  target) :AForm("PresidentialPardonForm", 0, 25, 5) , target(target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}


void  PresidentialPardonForm::executeAction()
{
    
}
std::string    PresidentialPardonForm::GetTarget()
{
    return this->target;
}

