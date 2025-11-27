#include "easyfind.hpp"

int main()
{
    try{
        std::cout << "Vector        " << std::endl;
        std::vector<int> v;
        v.push_back(10);
        v.push_back(20);
        v.push_back(30);
        v.push_back(1337);
        v.push_back(50);
        v.push_back(60);

        int occurrence =  easyfind(v , 1337);
        std::cout  << "the first occurrence is " << occurrence << std::endl;

    }catch(const std::exception &e)
    {
        std::cout << e.what()  << std::endl;
    }

    try
    {
        std::cout <<  std::endl << "List        " << std::endl;
        std::list<int> mylist;

        mylist.push_back(10);
        mylist.push_back(20);
        mylist.push_back(30);
        mylist.push_back(40);
        mylist.push_back(50);
        mylist.push_front(1337);


        int occurrence =  easyfind(mylist , 400);
        std::cout  << "the first occurrence is " << occurrence << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }





    return 0;
}