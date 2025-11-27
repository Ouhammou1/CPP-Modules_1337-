#include "MutantStack.hpp"
#include <list>

int main()
{
    std::cout << "                  MutantStack    " << std::endl << std::endl << std::endl;



    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    
    std::cout << "                  Iteration with iterator " << std::endl << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << "                  Reverse iteration with iterator " << std::endl << std::endl;

    MutantStack<int>::reverse_iterator rit = mstack.rbegin();
    MutantStack<int>::reverse_iterator rite = mstack.rend();
    while (rit != rite)
    {
        std::cout << *rit << std::endl;
        ++rit;
    }
    
    std::cout << "                  Const Iteration with iterator" << std::endl << std::endl;

    const MutantStack<int> constStack(mstack);

        MutantStack<int>::const_iterator cit = constStack.begin();
        MutantStack<int>::const_iterator cite = constStack.end();


        while (cit  != cite)
        {
            std::cout << *cit << std::endl;
            cit++;
        }
        

    std::stack<int> s(mstack);

    std::cout << "                  LIST    " << std::endl << std::endl << std::endl;


    std::list<int> list;
    list.push_back(5);
    list.push_back(17);
    std::cout << list.back() << std::endl;
    list.pop_back();
    std::cout << list.size() << std::endl;
    list.push_back(3);
    list.push_back(5);
    list.push_back(737);
    list.push_back(0);
    std::list<int>::iterator lit = list.begin();
    std::list<int>::iterator lite = list.end();
    ++lit;
    --lit;
    
    std::cout << "                  Iteration with iterator " << std::endl << std::endl;
    while (lit != lite)
    {
        std::cout << *lit << std::endl;
        ++lit;
    }
    std::cout << "                  Reverse iteration with iterator " << std::endl << std::endl;

    std::list<int>::reverse_iterator lrit = list.rbegin();
    std::list<int>::reverse_iterator lrite = list.rend();
    while (lrit != lrite)
    {
        std::cout << *lrit << std::endl;
        ++lrit;
    }
    
    std::cout << "                  Const Iteration with iterator" << std::endl << std::endl;

    const std::list<int> constList(list);

        std::list<int>::const_iterator lcit = constList.begin();
        std::list<int>::const_iterator lcite = constList.end();


        while (lcit  != lcite)
        {
            std::cout << *lcit << std::endl;
            lcit++;
        }
    return 0;
}