#ifndef BASE_HPP
#define BASE_HPP
#include  <iostream>
#include <cstdlib>

class Base
{
private:

public:
   virtual ~Base();
};


class A :public Base
{
private:
public:
    A();
};



class B :public Base
{
private:
public:
    B();
};



class C :public Base
{
private:
public:
    C();
};


#endif