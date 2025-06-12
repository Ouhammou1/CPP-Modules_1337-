/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 11:20:56 by bouhammo          #+#    #+#             */
/*   Updated: 2025/05/07 11:38:02 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#ifndef BUREAUCRAT
#define BUREAUCRAT

#include <iostream>

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


    void    displat()
    {
        std::cout << "name = " << name << std::endl;
        std::cout << "grade = " << grade << std::endl;
    }
    void    increment();
    void    decrement();
    std::string getName() const;
    int     getGrade() const;
    void    setGrade(int grade);
    
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