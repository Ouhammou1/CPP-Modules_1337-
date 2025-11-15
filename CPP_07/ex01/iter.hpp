#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template <typename T, typename F>
void    iter( T *arr, const int size , F function)
{
    for(int i = 0; i < size ; i++)
    {
        function(arr[i]);
    }
}

template <typename I>
void    increment(I& x)
{
    x++;
}

template <typename U>
void    printElement(const  U& x)
{
    std::cout << x << " ";
}

template <typename S>
void    setToNumber(S& x)
{
    x = 42;
}







#endif