/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 14:23:38 by bouhammo          #+#    #+#             */
/*   Updated: 2025/10/01 19:07:24 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef INTERN_HPP
#define INTERN_HPP
#include "AForm.hpp"

class Intern
{
private:
    static AForm*  makePresident(std::string target);
    static AForm*  makeRobot(std::string target);
    static AForm*  makeShrubbery(std::string target);
    
public:

    AForm *makeForm(std::string nameForm , std::string target);
    
    Intern();
    Intern(const Intern& other);
    Intern& operator=(const Intern& other);
    ~Intern();

    
};




#endif

