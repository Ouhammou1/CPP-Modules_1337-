#include "PmergeMe.hpp"

int main(int ac , char **av)
{
    if(ac <= 1)
    {
        std::cerr << "Error " << std::endl;
        return 1;
    }
    
    PmergeMe pmerg;

    try{
        for (int i = 1; i < ac; i++)
        {
            if(!pmerg.handleInput(av[i]))
            {
                std::cerr << "Error" << std::endl;
                return 1;
            }
            pmerg.storeNumbers(av[i]);
        }
        pmerg.runVector();
        pmerg.runDeque();

    } catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    

    return 0;
}