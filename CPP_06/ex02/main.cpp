#include "Base.hpp"
#include "generater.hpp"

int main()
{
    srand(time(0));


    for (int i = 0; i < 5; i++)
    {
        Base *ptr = generate();
        
        std::cout << "Identify by pointer" << std::endl;
        identify(ptr);


        std::cout << "Identify by reference" << std::endl;
        identify(*ptr);

        std::cout << std::endl << std::endl;
        
        delete ptr;
        
    }
    
    return 0;
} 