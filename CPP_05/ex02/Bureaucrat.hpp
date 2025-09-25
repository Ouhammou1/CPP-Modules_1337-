/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 20:44:31 by bouhammo          #+#    #+#             */
/*   Updated: 2025/09/25 12:07:12 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include <iostream>
#include "AForm.hpp"

class AForm;
class Bureaucrat
{
private:
    const   std::string name;
    int     grade;
public:
    Bureaucrat();
    Bureaucrat(std::string name , int grade);
    Bureaucrat(const Bureaucrat &other);
    Bureaucrat& operator=(const Bureaucrat &other);
    ~Bureaucrat();

    class GradeTooHighException : public std::exception
    {
        public:
        const char* what() const throw();
        GradeTooHighException() throw();
        ~GradeTooHighException() throw();
    };
    class GradeTooLowException :public std::exception 
    {
        public:
        const char * what() const throw();
        GradeTooLowException() throw();
        ~GradeTooLowException() throw();
    };


    std::string getName()   const;
    int  getGrade()         const;

    void        increment();
    void        decrement();

    void    signForm( AForm &form);    
    void    executeForm(const AForm &form) const ;

};
std::ostream &operator<<(std::ostream &out , const Bureaucrat &bure);


#endif
