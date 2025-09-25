/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 11:25:57 by bouhammo          #+#    #+#             */
/*   Updated: 2025/09/19 11:25:58 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("") , grade(-1)
{
   if(grade < 1 )
        throw GradeTooHighException();
    if(grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(std::string name , int grade) : name(name) , grade(grade)
{
    if(grade < 1 )
        throw GradeTooHighException();
    if(grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
}
Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
    *this = other;
}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{
    if(this != &other)
    {
        grade = other.grade;
    }
    return *this;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade too high!";
}
Bureaucrat::GradeTooHighException::GradeTooHighException() throw()
{
}
Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{
}


const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade too low!";
}
Bureaucrat::GradeTooLowException::GradeTooLowException() throw()
{
}
Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{
}

std::string Bureaucrat::getName() const
{
    return name;
}
int  Bureaucrat::getGrade() const
{
    return grade;
}

void Bureaucrat::decrement()
{

    if (grade >= 150)
    {
        throw GradeTooLowException();
    }
    grade = grade + 1;

}
void Bureaucrat::increment()
{
    if (grade <= 1)
    {
        throw GradeTooHighException();
    }
    grade = grade - 1;
}

std::ostream &operator<<(std::ostream &out , const Bureaucrat &bure)
{
    out << bure.getName() <<", bureaucrat grade " << bure.getGrade() << "." ;
    return out;
}

