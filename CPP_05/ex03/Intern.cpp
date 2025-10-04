/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 14:26:03 by bouhammo          #+#    #+#             */
/*   Updated: 2025/10/01 19:11:09 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Intern.hpp"

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(const Intern& other)
{
    (void)other;
}
Intern& Intern::operator=(const Intern& other)
{
    (void)other;
    return *this;
}

AForm*  Intern::makePresident(std::string target)
{
    return new PresidentialPardonForm(target); 
}
AForm*  Intern::makeRobot(std::string target)
{
    return new RobotomyRequestForm(target); 
}
AForm*  Intern::makeShrubbery(std::string target)
{
    return new ShrubberyCreationForm(target); 
}




AForm *Intern::makeForm(std::string nameForm , std::string target)
{
    AForm *(*allForms[])(std::string)={&makePresident , &makeRobot , &makeShrubbery};
    
    std::string forms[] = { "presidential pardon", "robotomy request", "shrubbery creation" };

    
    for (size_t i = 0; i < 3; i++)
    {
        if(nameForm == forms[i])
        {
            std::cout << "Intern creates " << nameForm << std::endl;
            return (allForms[i])(target);
        }
    }
    std::cout << "Error: Intern cannot create a form called " << nameForm << std::endl;
    return nullptr;
}



