/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 20:42:12 by bouhammo          #+#    #+#             */
/*   Updated: 2025/09/20 20:42:13 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AFORM_H
#define AFORM_H
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class AForm 
{
private:
    const       std::string name;
    bool        is_signed;
    const int   signGrade;
    const int   executeGrade;
public:
    AForm();
    AForm(std::string name , bool is_signed , const int signGrade , const int   executeGrade);
    AForm(const AForm &other);
    AForm& operator=(const AForm &other);
    virtual ~AForm();



    std::string GetName() const;
    bool        GetIsSigned() const;
    int         GetSignGrade() const;
    int         GetExecuteGrade() const;


    virtual void executeAction(const Bureaucrat& bure) const = 0 ;
    void         execute(Bureaucrat const & executor) const;


    void SetSigned(bool status);
    void beSigned(const Bureaucrat& bure);

    class  GradeTooHighException : public std::exception
    {
        public:
            const char *what() const throw();
            GradeTooHighException() throw();
            ~GradeTooHighException() throw();
    };
    class GradeTooLowException : public std::exception
    {
        public:
        const char *what() const throw();
        GradeTooLowException() throw();
        ~GradeTooLowException() throw();
    };

    class FormNotSignedExcption : public std::exception
    {
        public:
        const char* what() const throw();
        FormNotSignedExcption() throw();
        ~FormNotSignedExcption() throw();
    };
};


std::ostream& operator<<(std::ostream &out , const AForm &Aform);

#endif