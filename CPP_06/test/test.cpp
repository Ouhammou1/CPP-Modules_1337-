#include <iostream>



class Base
{
private:
    
public:
    Base();
    virtual ~Base();
};

class Derived : public Base
{
private:
    
public:
    void greet()
    {
        std::cout << "Hello \n" << std::endl;
    }
    Derived();
    ~Derived();
};




int main()
{

    double pi = 3.1465668;

    int n = static_cast<int>(pi);
    std::cout << "n = " << n  << std::endl;

    return 0;
}