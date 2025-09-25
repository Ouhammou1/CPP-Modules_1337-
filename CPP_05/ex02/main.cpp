#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


void testShrubberyCreationForm()
{
    std::cout << "              Testing ShrubberyCreationForm "<< std::endl << std::endl;
    try{
        Bureaucrat lowgrade("lowgrade" , 150);
        Bureaucrat hightgrade("hightgrade" , 1);

        ShrubberyCreationForm shrub("home");
        std::cout << std::endl  << shrub <<  std::endl;

        lowgrade.signForm(shrub);
        
        std::cout << "Execute form " << std::endl << std::endl;
        hightgrade.executeForm(shrub);

        std::cout << "Signing the form " << std::endl << std::endl; 
        hightgrade.signForm(shrub);

        std::cout << "Trying to execute form  with low grade bure" << std::endl << std::endl;
        lowgrade.executeForm(shrub);

        std::cout << "Trying to execute form  with hight grade bure" << std::endl << std::endl;
        hightgrade.executeForm(shrub);

        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception:*********************** " << e.what() << std::endl;
        exit(1);
    }
}
void        testRobotomyRequestForm()
{
    std::cout << "              Testing testRobotomyRequestForm "<< std::endl << std::endl;
    try
    {
        Bureaucrat bure("Robot" ,  42);
        RobotomyRequestForm robot("claptrap");

            std::cout << std::endl  << robot <<  std::endl;

        std::cout << "                  Robot "  << std::endl << std::endl;

        bure.signForm(robot);
        bure.executeForm(robot);

    }


    catch(const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    
}

void    testPresidentialPardonForm()
{
        std::cout << "             Testing PresidentialPardonForm " << std::endl;

        try
        {
            Bureaucrat president("ouhammou" , 1);
            Bureaucrat lowbure("lowbure" ,10);

            PresidentialPardonForm pardon("brahim");


            std::cout << std::endl  << pardon <<  std::endl;
            lowbure.signForm(pardon);

            president.signForm(pardon);
    
            president.executeForm(pardon);

            std::cout << std::endl  << pardon <<  std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << "Exception: " << e.what() << std::endl;
        }

        
}
int main()
{
    testShrubberyCreationForm();
    // testRobotomyRequestForm();
    // testPresidentialPardonForm();




    return 0;
}