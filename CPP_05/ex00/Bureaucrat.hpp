/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 11:25:50 by bouhammo          #+#    #+#             */
/*   Updated: 2025/09/19 11:25:51 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

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


    std::string getName()const;
    int  getGrade() const;


    void increment();
    void decrement();


};
std::ostream &operator<<(std::ostream &out , const Bureaucrat &bure);

