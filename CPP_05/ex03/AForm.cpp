#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() :name("") , is_signed(false) , signGrade(150) , executeGrade(150)
{

    if( signGrade <= 0 || executeGrade <= 0)
        throw GradeTooHighException();
    if( signGrade > 150  || executeGrade > 150)
        throw GradeTooLowException();
}

AForm::~AForm()
{
}

AForm::AForm(std::string name , bool is_signed , const int signGrade , const int   executeGrade): name(name), is_signed(is_signed), signGrade(signGrade), executeGrade(executeGrade)
{
    if( signGrade <= 0 || executeGrade <= 0)
        throw GradeTooHighException();
    if( signGrade > 150  || executeGrade > 150)
        throw GradeTooLowException();

}
AForm::AForm(const AForm &other) :name(other.name) , is_signed(other.is_signed) , signGrade(other.signGrade) , executeGrade(other.executeGrade)
{
}
AForm& AForm::operator=(const AForm &other)
{
    if (this != &other)
    {
        is_signed = other.is_signed;
    }
    return *this;
}

std::string AForm::GetName() const 
{
    return name;
}
bool        AForm::GetIsSigned() const 
{
    return is_signed;
}
int         AForm::GetSignGrade() const
{
    return signGrade;
}
int         AForm::GetExecuteGrade() const 
{
    return executeGrade;
}


void AForm::SetSigned(bool  status)
{
    this->is_signed = status;
}


const char* AForm::GradeTooHighException::what() const throw()
{
    return "Grade too high!";
}
AForm::GradeTooHighException::GradeTooHighException() throw()
{
}
AForm::GradeTooHighException::~GradeTooHighException() throw()
{
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return "Grade too low!";
}
AForm::GradeTooLowException::GradeTooLowException() throw()
{
}
AForm::GradeTooLowException::~GradeTooLowException() throw()
{
}

const char*    AForm::FormNotSignedExcption::what() const throw()
{
    return "Form Not Signed ";
}



AForm::FormNotSignedExcption::FormNotSignedExcption() throw()
{
}
AForm::FormNotSignedExcption::~FormNotSignedExcption() throw()
{
}




void AForm::beSigned(const Bureaucrat& bure)
{
    if (bure.getGrade() <= GetSignGrade())
    {
        SetSigned(true);
    }
    else
        throw GradeTooLowException();
}




std::ostream& operator<<(std::ostream &out , const AForm &Aform)
{
    std::string str;
    if (Aform.GetIsSigned() == false)
        str = "No";
    else
        str ="Yes";
    
    out << "Name                          : " << Aform.GetName() << std::endl;
    out << "It is signed                  : " << str << std::endl;
    out << "Grade required to sign it     : " << Aform.GetSignGrade() << std::endl;
    out << "Grade required to execute it  : " << Aform.GetExecuteGrade() << std::endl;

    return out;
}


void         AForm::execute(Bureaucrat const & executor) const
{
    executeAction(executor);
}
