#include "Span.hpp"

int main()
{
    try
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;

        std::cout <<  std::endl <<"             Testing Span with a large number " << std::endl << std::endl;
            
        Span span = Span(20000);
        std::vector<int> v1 ;
        for(size_t i = 0 ; i < 20000 ; i++ )
            v1.push_back(i * 1.5);
        
        span.addNumbers(v1.begin() , v1.end());
        std::cout << span.shortestSpan() << std::endl;
        std::cout << span.longestSpan() << std::endl;

    }
    catch(const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}