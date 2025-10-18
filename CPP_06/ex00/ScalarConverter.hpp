#ifndef SCALAR_HPP
#define SCALAR_HPP
#include <iostream>
#include "Utils.hpp"

class ScalarConverter
{
private:
    ScalarConverter();

public:
    ScalarConverter(const ScalarConverter &other);
    ScalarConverter& operator=(const ScalarConverter &other);
    ~ScalarConverter();


    static void  convert(std::string str);


};


#endif