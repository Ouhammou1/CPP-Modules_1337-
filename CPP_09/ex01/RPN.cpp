#include "RPN.hpp"
#include <deque>
RPN::RPN()
{
}

RPN::~RPN()
{
}


RPN::RPN(const RPN & other)
{
    *this = other;
}

RPN &RPN::operator=(const RPN & other)
{
    if(this != &other)
    {
        rpn = other.rpn;
    }
    return *this;
}

bool RPN::handleInput(std::string str)
{
    std::stringstream ss(str);
    std::string token;
    while (ss >> token)
    {
        if(token == "+" || token == "-" || token == "*" || token == "/")
            continue;
        if (token[0] == '-' && token.size() > 1)
            token = token.substr(1);
        if (!std::all_of(token.begin() , token.end() , ::isdigit))
            return false;
    }
    return true;
}

void    RPN::PolishNotation(std::string  str)
{
    std::istringstream iss(str);
    
    std::string token ;

    while (iss >> token)
    {
        if((token.size() == 1 && std::isdigit(token[0])) 
        || (token.size() == 2 && token[0] =='-'))
            rpn.push(std::atof(token.c_str()));
        
        else if(token == "+" || token == "-" || token == "*" || token == "/")
        {
            if(rpn.size() < 2)
            {
                std::cerr << "Error 1 " << std::endl;
                return;
            }

            double b = rpn.top();
            rpn.pop();
            double a = rpn.top();
            rpn.pop();


            if(token == "+")
                rpn.push(a+b);
            else if(token == "-")
                rpn.push(a-b);
            else if(token == "*")
                rpn.push(a*b);
            else if (token == "/")
            {
                if(b == 0)
                {
                    std::cerr << "Error " << std::endl;
                    return;
                }
                rpn.push(a / b);
            }
        }
        else
        {
            std::cerr << "Error" << std::endl;
            return;
        }
    }
    if(rpn.size() != 1)
    {
        std::cerr << "Error" << std::endl;
        return;
    }
    std::cout << rpn.top() << std::endl;
    rpn.pop();
}