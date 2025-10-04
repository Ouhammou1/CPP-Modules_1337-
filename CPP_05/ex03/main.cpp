#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"



int main()
{

    Bureaucrat bure("superman" , 1);

    Intern      someRandomIntern;
    AForm*      rrf;

    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    if(rrf != nullptr)
    {
        try
        {
            rrf->beSigned(bure);
            rrf->execute(bure);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
        delete rrf;
    }

    rrf = someRandomIntern.makeForm("presidential pardon" , "bender2");
    if(rrf != nullptr)
    {
        try{
            rrf->beSigned(bure);
            rrf->execute(bure);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() <<  std::endl;
        }
        delete rrf;
    }


    rrf = someRandomIntern.makeForm("no form " , "bender2");
    if(rrf != nullptr)
    {
        try{
            rrf->beSigned(bure);
            rrf->execute(bure);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() <<  std::endl;
        }
        delete rrf;
    }    


    return 0;
}