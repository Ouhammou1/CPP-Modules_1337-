#include "Array.hpp"


int main()
{
   try{
        std::cout << "objet a " << std::endl << std::endl;

        Array<int> a(5);
        a[0]=1;
        a[2]=61;
        a[1]=42;
        a[4]=1337;    
        a[3]=19;
        a.display();

        std::cout << "size of  the a is  " << a.size() << std::endl;

        std::cout << "objet b " << std::endl << std::endl;

        const Array<int> b(a) ;
        b.display();

        std::cout << "objet c " << std::endl << std::endl;

        Array<std::string> c(5);
        c[0]= "one" ;
        c[2]= "two" ;
        c[1]= "tree";
        c[4]= "four";  
        c[3]= "five";
        c[23]= "five";

        c.display();
    }
    catch(std::exception const &e)
    {
        std::cout << e.what() << std::endl;
    }

    
    return 0;
}