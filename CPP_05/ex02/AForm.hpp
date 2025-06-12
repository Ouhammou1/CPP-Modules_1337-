/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 12:21:38 by bouhammo          #+#    #+#             */
/*   Updated: 2025/05/18 11:17:56 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef FORMUP
#define FORMUP
#include <iostream>
#include "AForm.hpp"
#include <string>

class Bureaucrat;
class AForm
{
    private:
        const std::string name;
        bool isSigned ;
        const int gradeToSign;
        const int gradeToExecute;
        // std::string target;
        

    public:
        AForm(std::string name ,int isSigned, int gradeToSign ,int gradeToExecute);
        AForm();
        AForm(const AForm& other);
        AForm& operator=(const AForm& other);

        
        std::string getName()  const;
        bool        getSigned()  const;
        int         getGradeToSign()  const;
        int         getGradeToExecute()  const;
        
        void        setSigned();

        virtual   void    executeAction() =0;


        void    beSigned(const Bureaucrat &bure);


        ~AForm();
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

std::ostream&  operator<<(std::ostream &os , const AForm& form);

#endif