/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 12:38:08 by bouhammo          #+#    #+#             */
/*   Updated: 2025/05/18 11:18:22 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef SHRUBBERY_H
#define SHRUBBERY_H
#include "AForm.hpp"
#include <fstream>
class ShrubberyCreationForm  :public AForm
{
private:
    std::string target;
    
public:
    ShrubberyCreationForm(std::string target);
    ~ShrubberyCreationForm();
    void    executeAction();
    std::string    GetTarget();


};




#endif