#ifndef     SPAN_HPP
#define     SPAN_HPP
#include <iostream>
#include <vector>
#include <algorithm>
class Span
{
private:
    unsigned int N;
    std::vector< int> numbers;
public:
    Span();
    Span(unsigned int N);
    Span(const Span &other);
    Span& operator=(const Span &other);
    ~Span();

    void        addNumber( int n);
    long         shortestSpan();
    long        longestSpan();
    void        display();
};




#endif