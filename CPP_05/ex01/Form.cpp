#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() :name("") , is_signed(false) , signGrade(150) , executeGrade(150)
{
    if( signGrade <= 0 || executeGrade <= 0)
        throw GradeTooHighException();
    if( signGrade > 150  || executeGrade > 150)
        throw GradeTooLowException();
}

Form::~Form()
{
}

Form::Form(std::string name , bool is_signed , const int signGrade , const int   executeGrade): name(name), is_signed(is_signed), signGrade(signGrade), executeGrade(executeGrade)
{
    if( signGrade <= 0 || executeGrade <= 0)
        throw GradeTooHighException();
    if( signGrade > 150  || executeGrade > 150)
        throw GradeTooLowException();

}
Form::Form(const Form &other) :name(other.name) , is_signed(other.is_signed) , signGrade(other.signGrade) , executeGrade(other.executeGrade)
{
}
Form& Form::operator=(const Form &other)
{
    if (this != &other)
    {
        is_signed = other.is_signed;
    }
    return *this;
}

std::string Form::GetName() const 
{
    return name;
}
bool        Form::GetIsSigned() const 
{
    return is_signed;
}
int         Form::GetSignGrade() const
{
    return signGrade;
}
int         Form::GetExecuteGrade() const 
{
    return executeGrade;
}


void Form::SetSigned(bool  status)
{
    this->is_signed = status;
}


const char* Form::GradeTooHighException::what() const throw()
{
    return "Grade too high!";
}
Form::GradeTooHighException::GradeTooHighException() throw()
{
}
Form::GradeTooHighException::~GradeTooHighException() throw()
{
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Grade too low!";
}
Form::GradeTooLowException::GradeTooLowException() throw()
{
}
Form::GradeTooLowException::~GradeTooLowException() throw()
{
}

void Form::beSigned(const Bureaucrat& bure)
{
    if (bure.getGrade() <= GetSignGrade())
    {
        SetSigned(true);
    }
    else
        throw GradeTooLowException();
}




std::ostream& operator<<(std::ostream &out , const Form &form)
{
    std::string str;
    if (form.GetIsSigned() == false)
        str = "No";
    else
        str ="Yes";
    
    out << "Name                          : " << form.GetName() << std::endl;
    out << "It is signed                  : " << str << std::endl;
    out << "Grade required to sign it     : " << form.GetSignGrade() << std::endl;
    out << "Grade required to execute it  : " << form.GetExecuteGrade() << std::endl;

    return out;
}
