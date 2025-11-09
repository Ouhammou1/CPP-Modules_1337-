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
    if(isChar(str))
        convertFromChar(str);

    if(isInt(str))
        convertFromNumber(str);

    if(isDouble(str))
        convertFromNumber(str);

    if(isFloat(str))
        convertFromNumber(str);

    if(isPseudoLiteral(str))
        convertFromPseudoLiteral(str);
}

