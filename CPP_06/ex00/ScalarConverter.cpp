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





void  ScalarConverter::convert(std::string str)
{
    if(inValidInput(str))
        printChar(str , true);
}

