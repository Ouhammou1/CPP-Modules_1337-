/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 13:56:39 by bouhammo          #+#    #+#             */
/*   Updated: 2025/05/10 20:54:00 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string name , int isSigned, int gradeToSign ,int gradeToExecute): name(name),isSigned(isSigned), gradeToSign(gradeToSign) , gradeToExecute(gradeToExecute)
{   
    if(gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();

    if(gradeToSign > 150 || gradeToExecute > 150) 
        throw GradeTooLowException();
}

Form::Form() : name("") , gradeToSign(0) , gradeToExecute(0)
{
}

Form::~Form()
{
}

Form::GradeTooHighException::GradeTooHighException() throw()
{
}

Form::GradeTooHighException::~GradeTooHighException() throw()
{
}

Form::Form(const Form& other): name(other.name) ,isSigned(other.isSigned) , gradeToSign(other.gradeToSign) ,gradeToExecute(other.gradeToExecute) 
{
    *this  = other;
}
Form& Form::operator=(const Form& other) 
{
    if(this != &other)
    {
        this->isSigned = other.isSigned;
    }
    return *this;
}


const char *Form::GradeTooHighException::what() const throw()
{   
    return "Form Exception: Grade too high!";
}


Form::GradeTooLowException::GradeTooLowException() throw()
{
}

Form::GradeTooLowException::~GradeTooLowException() throw()
{
}
const char *Form::GradeTooLowException::what() const throw()
{
    
    return "Form Exception: Grade too low!";
}


std::string Form::getName() const
{
    return  this->name;
}
bool        Form::getSigned() const
{
    return  this->isSigned;
}
void        Form::setSigned()
{
    this->isSigned = 1;
}
int         Form::getGradeToSign() const 
{
    return this->gradeToSign;
}
int         Form::getGradeToExecute() const 
{
    return  this->gradeToExecute;
}

std::ostream&  operator<<(std::ostream &os , const Form& form)
{ 
    std::string str ;
    if(form.getSigned() == 0)
        str = "No";
    if(form.getSigned() == 1)
        str = "Yes";
        
    os <<  "Name is " << form.getName()  << ", Signed: " << str << ", Grade to Sign: " << form.getGradeToSign() <<  ", Grade to Execute: " << form.getGradeToExecute() <<".";
    return os;
}


void     Form::beSigned(const Bureaucrat &bure)
{
    if(bure.getGrade() > getGradeToSign())
        throw GradeTooLowException();
    
    setSigned();
}


