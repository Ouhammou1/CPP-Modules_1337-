#include "Utils.hpp"


bool isChar( std::string literal)
{
    std::cout  << "literal.length() = " << literal.length() << std::endl;
    if (literal.length() == 1 && std::isprint(literal[0]))
        return true;
    return false;
}

// bool    isChar(std::string input)
// {
//     std::cout << " input.length() = " << input.length() << std::endl;
//     if(input.length() == 1 && std::isprint(input[0]))
//         return true;
//     return false;
// }
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


// bool    inValidInput(std::string str)
// {
//     if(isChar(str))
//         return true;
//     return false;
// }


void    printChar(double value, bool impossible)
{
    std::cout << "char: ";
    std::cout << "val = " << value  << std::endl;
    if (impossible || std::isnan(value) || std::isinf(value)) {
        std::cout << "impossible";
    } else if (value < 0 || value > 127) {
        std::cout << "impossible";
    } else if (value < 32 || value == 127) {
        std::cout << "Non displayable";
    } else {
        std::cout << "'" << static_cast<char>(value) << "'";
    }
    std::cout << std::endl;
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
