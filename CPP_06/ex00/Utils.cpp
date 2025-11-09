#include "Utils.hpp"

int isNumric(std::string str)
{
    size_t i = 0;
    if (str[i] == '=' || str[i] == '-')
        i++;
    
    int count = 0;

    size_t len = str.size();
    if (str[str.length() -1] == 'f')
        len--;
    for (; i < len ; i++)
    {
        if(str[i] == '.')
        {
            count++;
            if (count > 1)
                return 1;
        }
        else if (!std::isdigit(str[i]))
            return 1;
    }
    return 0;
}


double afterPoint(std::string input)
{
    size_t pos = 0;
    pos = input.find('.');

    std::string  str = input.substr(pos+1);

    size_t len = str.length();
    if(str[len -1] == 'f')
        len--;
    size_t i =0;
    double sum =0;
    while(i < len)
    {
        sum = (sum * 10) + (str[i] - '0');
        i++;
    }
    double result = sum / pow(10.0 , len);
    return result;
}

double  convertToNumber(std::string input)
{
    double sum = 0;
    double num = 0;
    size_t i =0;
    if (input[0] == '-' || input[0] == '+')
        i++;
    
    while(i < input.size())
    {
        if(input[i] == '.')
        {
            num = afterPoint(input);
            break;
        }
        sum = (sum * 10) + (input[i] - '0');
        i++;
    }
    if(input[0] == '-')
        sum *=-1;

    return( sum + num);
    
}

void    convertFromChar(std::string str)
{
    char c = str[0];

    int _int = static_cast<int>(c);
    double _double = static_cast<double>(c);
    float _float = static_cast<float>(c);

    std::cout <<"char: " << "'" << c << "'" << std::endl;
    std::cout <<"int: " << _int << std::endl;
    std::cout <<"float: " << _float<< "f"<< std::endl;
    std::cout <<"double: " << _double  << std::endl;

}

bool isChar( std::string str)
{
    if (str.length() == 1 && std::isprint(str[0]) && !std::isdigit(str[0]))
        return true;
    return false;
}


bool checkIsInt(std::string input)
{
     if(input.find('.') != std::string::npos)
        return false;
    
    if(input.find('f') != std::string::npos)
        return false;

    return true;
}
bool    isInt(std::string input)
{

    if(input.empty())
        return false;

    if(isNumric(input) == 1)
        return false;
    
    if(checkIsInt(input) == false)
        return false;
    
    return true;
}

bool    checkIsDouble(std::string input)
{
    
    if(input.find('.') == std::string::npos)
        return false;
    
    if(input.find('f') != std::string::npos)
        return false;
        
    return true;
}
bool    checkIsFloat(std::string input)
{
    
    if(input.find('.') == std::string::npos)
        return false;
    
    if(input.find('f') == std::string::npos)
        return false;

    return true;
}

bool isDouble( std::string input)
{
    if(input.empty())
        return false;

    if(isNumric(input) == 1)
        return false;

    if(checkIsDouble(input) == false)
        return false;

    return true;
}

bool isFloat( std::string input)
{
    if(input.empty())
        return false;

    if(isNumric(input) == 1)
        return false;

    if(checkIsFloat(input) == false)
        return false;

    return true;
}
bool checkPointExist(double  number)
{
    return std::floor(number)!= number  ;
}


void    convertFromNumber(std::string str)
{
    double num = convertToNumber(str);
    bool hasPoint = false;

    hasPoint = checkPointExist(num);
    std::cout << "char: ";
    if(num < 0 || num > 127)
        std::cout << "impossible" << std::endl;
    else if (num < 32 || num == 127)
        std::cout << "Non displayable" << std::endl;
    else
    {
        char c = static_cast<char>(num);
        std::cout <<"'" << c << "'" << std::endl;
    }
    if (num > std::numeric_limits<int>::min() && num < std::numeric_limits<int>::max())
    {
        int _int = static_cast<int>(num);
        std::cout << "int: " << _int << std::endl;
    }
    else
        std::cout << "int: impossible" << std::endl;
    if (hasPoint == false)
    {
        std::cout << "float: " << num << ".0f" << std::endl;
        std::cout << "double: " << num << ".0" << std::endl;
        return;
    }
        std::cout << "float: " << num << "f" << std::endl;
        std::cout << "double: " << num << std::endl;
}



bool    isPseudoLiteral(std::string input)
{
    if(input == "nanf" || input == "+inff" || input == "-inff" 
    || input == "nan" || input == "+inf" || input == "-inf")
        return true;
    return false;
}

void        convertFromPseudoLiteral(std::string str)
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;

    if(str == "nanf" || str == "nan")
    {
        if(str[str.length() -1] == 'f')
        {
            std::cout << "float: "<< str  << std::endl;
            std::cout << "double: " << str.substr(0 , str.length() -1) << std::endl;
        }
        else
        {
            std::cout << "float: "<< str << "f" << std::endl;
            std::cout << "double: " << str << std::endl;
        }
        return ;
    }
    if (str[str.length()-1] == 'f' && str[str.length()-2] == 'f')
        std::cout << "float: "<< str  << std::endl;
    else
        std::cout << "float: "<< str << "f" << std::endl;

    if (str[str.length()-1] == 'f' && str[str.length()-2] == 'f')
        std::cout << "double: " << str.substr(0 , str.length() -1) << std::endl;
    else
        std::cout << "double: "<< str  << std::endl;
    
}

