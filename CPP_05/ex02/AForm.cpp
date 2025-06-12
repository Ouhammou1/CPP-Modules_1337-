/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 12:21:28 by bouhammo          #+#    #+#             */
/*   Updated: 2025/05/13 12:27:05 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(std::string name , int isSigned, int gradeToSign ,int gradeToExecute): name(name),isSigned(isSigned), gradeToSign(gradeToSign) , gradeToExecute(gradeToExecute)
{   
    if(gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();

    if(gradeToSign > 150 || gradeToExecute > 150) 
        throw GradeTooLowException();
}

AForm::AForm() : name("") , gradeToSign(0) , gradeToExecute(0)
{
}

AForm::~AForm()
{
}

AForm::GradeTooHighException::GradeTooHighException() throw()
{
}

AForm::GradeTooHighException::~GradeTooHighException() throw()
{
}

AForm::AForm(const AForm& other): name(other.name) ,isSigned(other.isSigned) , gradeToSign(other.gradeToSign) ,gradeToExecute(other.gradeToExecute) 
{
    *this  = other;
}
AForm& AForm::operator=(const AForm& other) 
{
    if(this != &other)
    {
        this->isSigned = other.isSigned;
    }
    return *this;
}


const char *AForm::GradeTooHighException::what() const throw()
{   
    return "AForm Exception: Grade too high!";
}


AForm::GradeTooLowException::GradeTooLowException() throw()
{
}

AForm::GradeTooLowException::~GradeTooLowException() throw()
{
}
const char *AForm::GradeTooLowException::what() const throw()
{
    
    return "AForm Exception: Grade too low!";
}


std::string AForm::getName() const
{
    return  this->name;
}
bool        AForm::getSigned() const
{
    return  this->isSigned;
}
void        AForm::setSigned()
{
    this->isSigned = 1;
}
int         AForm::getGradeToSign() const 
{
    return this->gradeToSign;
}
int         AForm::getGradeToExecute() const 
{
    return  this->gradeToExecute;
}

std::ostream&  operator<<(std::ostream &os , const AForm& Aform)
{ 
    std::string str ;
    if(Aform.getSigned() == 0)
        str = "No";
    if(Aform.getSigned() == 1)
        str = "Yes";
        
    os <<  "Name is " << Aform.getName()  << ", Signed: " << str << ", Grade to Sign: " << Aform.getGradeToSign() <<  ", Grade to Execute: " << Aform.getGradeToExecute() <<".";
    return os;
}


void     AForm::beSigned(const Bureaucrat &bure)
{
    if(bure.getGrade() > getGradeToSign())
        throw GradeTooLowException();
    
    setSigned();
}


