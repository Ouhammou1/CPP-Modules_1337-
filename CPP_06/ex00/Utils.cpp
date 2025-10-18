#include "Utils.hpp"




bool    isChar(std::string input)
{
    std::cout << " input.length() = " << input.length() << std::endl;
    if(input.length() == 1 && std::isprint(input[0]))
        return true;
    return false;
}
// bool    isInt(std::string input)
// {
//     (void)input;
//     return false;
// }
// bool    isFloat(std::string input)
// {
//     (void)input;
//     return false;
// }
// bool    isDouble(std::string input)
// {
//     (void)input;
//     return false;
// }


bool    inValidInput(std::string str)
{
    if(isChar(str))
        return true;
    return false;
}


void printChar(std::string value, bool impossible)
{
    if(impossible == true)
        std::cout <<"char: " << value << std::endl;
    else   
        std::cout << "char: impossible" << std::endl;

    
}
// void printInt(double value, bool impossible)
// {

// }
// void printFloat(double value)
// {

// }
// void printDouble(double value)
// {

// }
