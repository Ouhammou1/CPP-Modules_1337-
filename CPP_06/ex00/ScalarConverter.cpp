#include "ScalarConverter.hpp"



ScalarConverter::ScalarConverter()
{
}

ScalarConverter::~ScalarConverter()
{
}


ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
    *this = other;
}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter &other)
{
    if(this != &other)
    {
    }
    return *this;
}




void    convertFromChar(char c)
{

    double val = static_cast<double>(c);
    printChar(val , false);
}


void  ScalarConverter::convert(std::string str)
{
    if(isChar(str))
    {
        
        convertFromChar(str[0]);
    }
     
}

