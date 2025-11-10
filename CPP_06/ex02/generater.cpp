#include "generater.hpp"
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

Base * generate(void)
{

    int ran = rand() % 3;

    if(ran == 0)
        return new A();

    else if(ran == 1)
        return new B();
    
    else
        return new C();
}


void identify(Base* p)
{
    if(A *a = dynamic_cast<A*> (p))
        std::cout << "A" << std::endl;

    if(B *b = dynamic_cast<B*> (p))
        std::cout << "B" << std::endl;

    if(C *c = dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}


void identify(Base& p)
{
    try
    {
        A &a  = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "A" << std::endl;
        return;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        B &b = dynamic_cast<B&>(p);
        (void)b;
        std::cout << "B" << std::endl;
        return;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() <<  std::endl;
    }
    
    try
    {
        C &c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << "C" << std::endl;
        return;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}