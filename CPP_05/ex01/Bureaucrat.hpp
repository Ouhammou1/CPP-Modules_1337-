/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 11:20:56 by bouhammo          #+#    #+#             */
/*   Updated: 2025/05/10 21:47:30 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include "Form.hpp"

class Bureaucrat
{
private:
    const std::string  name;
    int grade;
public:
    Bureaucrat();
    Bureaucrat(std::string name , int grade);
    Bureaucrat(const Bureaucrat &other);
    Bureaucrat& operator=(const Bureaucrat &other);
    ~Bureaucrat();


    void        increment();
    void        decrement();
    std::string getName() const;
    int         getGrade() const;
    void        setGrade(int grade);
    
    void        signForm(Form &form);

    
    class GradeTooHighException : public std::exception
    {
    private:
    public:
        
        const char *what() const throw();
        GradeTooHighException() throw();
        ~GradeTooHighException() throw();

    };
    
    class GradeTooLowException : public std::exception
    {
    private:

    public:
        const char *what() const throw();
        GradeTooLowException() throw();
        ~GradeTooLowException() throw();
    };

};

std::ostream&  operator<<(std::ostream &os , const Bureaucrat& b);



#endif