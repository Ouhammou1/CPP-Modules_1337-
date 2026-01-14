#ifndef  POLISH_NOTATION_HPP
#define  POLISH_NOTATION_HPP
#include <iostream>
#include <sstream>
#include <stack>


class RPN
{
private:
    std::stack<double> rpn;
public:
    RPN();
    RPN(const RPN & other);
    RPN &operator=(const RPN & other);
    ~RPN();


    bool    handleInput(std::string str);
    void    PolishNotation(std::string  str);
};




#endif