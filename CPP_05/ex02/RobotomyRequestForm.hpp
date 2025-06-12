/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 11:13:41 by bouhammo          #+#    #+#             */
/*   Updated: 2025/05/18 12:17:19 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef ROBOTOMY_H
#define ROBOTOMY_H

#include "AForm.hpp"



class RobotomyRequestForm : public AForm
{
private:
    std::string target;
public:
    RobotomyRequestForm(std::string target);
    ~RobotomyRequestForm();

    void    executeAction();
    std::string    GetTarget();

};


#endif