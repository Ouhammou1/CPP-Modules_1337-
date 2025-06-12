/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 12:20:51 by bouhammo          #+#    #+#             */
/*   Updated: 2025/05/13 12:27:15 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : name("") , grade(-1)
{
}

Bureaucrat::Bureaucrat(std::string name , int grade) : name(name) , grade(grade)
{
    if(grade < 1)
        throw GradeTooHighException();
    if(grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name)
{
    *this  = other;
}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{
    if(this != &other)
    {
        grade = other.grade;
    }
    return *this;
}

Bureaucrat::GradeTooHighException::GradeTooHighException() throw()
{
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade too high!";
}

Bureaucrat::GradeTooLowException::GradeTooLowException() throw()
{
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade too low!";
}


std::string Bureaucrat::getName() const
{
    return this->name;
}

int     Bureaucrat::getGrade() const
{
    return this->grade;    
}
void    Bureaucrat::setGrade(int grade)
{
    if(grade < 1)
        throw GradeTooHighException();
    if(grade > 150)
        throw GradeTooLowException();
        
    this->grade = grade;
}

void    Bureaucrat::increment()
{
    if(grade <= 1 )
        throw GradeTooHighException();
        
    this->grade = this->grade - 1;
}
void    Bureaucrat::decrement()
{
    if(grade >= 150)
        throw GradeTooLowException() ;
    this->grade = this->grade + 1;
}

std::ostream&  operator<<(std::ostream &os , const Bureaucrat &b )
{
    os << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
    return os;
}


void    Bureaucrat::signForm(AForm &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << this->getName() << " signed " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << this->getName() << " couldn’t sign " << form.getName() << " because " << "reason " << std::endl;
        std::cerr << e.what() << '\n';
    }
    
    
}
