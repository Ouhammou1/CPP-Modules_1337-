/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 13:57:02 by bouhammo          #+#    #+#             */
/*   Updated: 2025/05/10 21:47:49 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORMUP
#define FORMUP
#include <iostream>
#include "Form.hpp"
// #include "Bureaucrat.hpp"
#include <string>

class Bureaucrat;
class Form
{
    private:
        const std::string name;
        bool isSigned ;
        const int gradeToSign;
        const int gradeToExecute;
        

    public:
        Form(std::string name ,int isSigned, int gradeToSign ,int gradeToExecute);
        Form();
        Form(const Form& other);
        Form& operator=(const Form& other);

        
        std::string getName()  const;
        bool        getSigned()  const;
        int         getGradeToSign()  const;
        int         getGradeToExecute()  const;
        
        void        setSigned();



        void    beSigned(const Bureaucrat &bure);


        ~Form();
        void    display()
        {
            std::cout << "name = " << name << std::endl;
            std::cout << "isSigned = " << isSigned << std::endl;
            std::cout << "gradeToSign = " << gradeToSign << std::endl;
            std::cout << "gradeToExecute = " << gradeToExecute << std::endl;            
        }




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

std::ostream&  operator<<(std::ostream &os , const Form& form);

#endif