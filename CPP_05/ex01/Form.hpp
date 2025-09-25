/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 20:33:04 by bouhammo          #+#    #+#             */
/*   Updated: 2025/09/19 21:00:37 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form 
{
private:
    const       std::string name;
    bool        is_signed;
    const int   signGrade;
    const int   executeGrade;
public:
    Form();
    Form(std::string name , bool is_signed , const int signGrade , const int   executeGrade);
    Form(const Form &other);
    Form& operator=(const Form &other);
    ~Form();



    std::string GetName() const;
    bool        GetIsSigned() const;
    int         GetSignGrade() const;
    int         GetExecuteGrade() const;


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
};


std::ostream& operator<<(std::ostream &out , const Form &form);

#endif