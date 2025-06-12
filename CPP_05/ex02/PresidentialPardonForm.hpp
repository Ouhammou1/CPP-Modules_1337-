/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 12:21:48 by bouhammo          #+#    #+#             */
/*   Updated: 2025/05/18 12:26:51 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */






#ifndef PRESIDENTIAL_H
#define PRESIDENTIAL_H

#include "AForm.hpp"
 
class PresidentialPardonForm :public AForm
{
private:
    std::string  target;
public:
    PresidentialPardonForm(std::string  target);
    ~PresidentialPardonForm();

    void    executeAction();
    std::string    GetTarget();

};




 #endif