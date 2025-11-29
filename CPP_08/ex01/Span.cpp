#include "Span.hpp"

Span::Span():N(0)
{
}

Span::~Span()
{
}

Span::Span(unsigned int N):N(N)
{

}
Span::Span(const Span &other)
{
    *this = other;
}
Span& Span::operator=(const Span &other)
{
    if(this != &other)
    {
        N = other.N;
        for (size_t i = 0; i < numbers.size(); i++)
            numbers[i] = other.numbers[i];   
    }
    return *this;
}

void    Span::addNumber( int n)
{
    if(numbers.size() >  N)
        throw std::out_of_range("out of the range");
    
    numbers.push_back(n);
}



void    Span::display()
{
    for(size_t i = 0; i < numbers.size() ; i++)
    {
        std::cout << "v[" << i << "] = " << numbers[i] << std::endl; 
    }
}

long Span::shortestSpan()
{
    size_t size = numbers.size();

    if(size < 2)
        throw  std::out_of_range("Not enough numbers");

    std::vector<int> tmp ;
    tmp = numbers;
    std::sort(tmp.begin() , tmp.end());

    long min = tmp[1] - tmp[0];
    for (size_t i = 0; i < size -1; i++)
    {
        long diff = static_cast<long>(tmp[i+1]) - static_cast<long>(tmp[i]);
        if(diff < min)
            min = diff;
    }
    return min;
}

long Span::longestSpan()
{
   size_t size = numbers.size();
    if(size < 2)
        throw  std::out_of_range("Not enough numbers ");

    std::vector<int> tmp = numbers;
    std::sort(tmp.begin() , tmp.end());
    long max = static_cast<long>(tmp[tmp.size() -1]);
    long min = static_cast<long>(tmp[0]);
    return(max - min);
}