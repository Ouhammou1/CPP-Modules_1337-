#ifndef     SPAN_HPP
#define     SPAN_HPP
#include <iostream>
#include <vector>
#include <algorithm>
class Span
{
private:
    unsigned int N;
    std::vector<int> numbers;
public:
    Span();
    Span(unsigned int N);
    Span(const Span &other);
    Span& operator=(const Span &other);
    ~Span();

    void        addNumber( int n);

    template <typename it>
    void        addNumbers(it start , it end);
    long        shortestSpan();
    long        longestSpan();
    void        display();
};

template<typename it>
void        Span::addNumbers(it start , it end)
{
    size_t len = std::distance(start , end);
    if(numbers.size() + len > N)
        throw std::out_of_range("out of the range  ");
    
    numbers.insert(numbers.end() , start , end);
}


#endif