#include  "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
    *this  = other;
}
BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &other)
{
    if(this != &other)
    {
        this->btc = other.btc;   
    }
    return *this;
}



double  BitcoinExchange::convertToNumber(std::string input)
{
        return std::atof(input.c_str()) ;
}

void    BitcoinExchange::removeSpaces(std::string &str)
{
    size_t start = str.find_first_not_of(" \t");
    size_t end = str.find_last_not_of(" \t");

    if(start == std::string::npos || end == std::string::npos)
        str = "";

    str = str.substr(start , end - start +1);
}

void      BitcoinExchange::isValidValue(std::string value)
{
    for(size_t i = 0 ; i < value.size() ; i++)
    {
        if(!std::isdigit(value[i]) && value[i] != '-' && value[i] != '.')   
            throw std::runtime_error("Error: Invalid number.");
    }


    double val = convertToNumber(value);

    if(val < 0)
            throw std::runtime_error("Error: not a positive number.");
    
    if(val > INT_MAX)
            throw std::runtime_error("Error: too large a number.");
}

bool    BitcoinExchange::isValidDate(std::string date)
{
    if(date.size() != 10 || date[4] != '-' || date[7] != '-')
        return false;
    
    int year = convertToNumber(date.substr(0, 4));
    int month = convertToNumber(date.substr(5, 2));
    int day = convertToNumber(date.substr(8, 2));

    if(year < 0 || year > 2025)
        return false;

    if(month < 0 || month >12)
        return false;
    
    if(day < 0 || day >31)
        return false;
    
    return true;
}





void    BitcoinExchange::handleFileInput(std::string filename)
{
    std::fstream file(filename);
    if(!file)
        throw std::runtime_error("Error: Cannot open file!");
    
    std::string line;
    std::getline(file , line);


    while (std::getline(file , line))
    {

        try{
            if(!line.empty())
            {
                size_t pos = line.find('|');
                if(pos == std::string::npos)
                    throw std::runtime_error("Error: bad input => "+ line);

                std::string date   = line.substr(0, pos);
                std::string value  = line.substr(pos + 1);

                removeSpaces(date);
                removeSpaces(value);


                if(!isValidDate(date))
                    throw std::runtime_error("Error: bad input => " + date);

                if(pos == std::string::npos)
                    throw std::runtime_error("Inavlid input ");

                isValidValue(value);
                double val = convertToNumber(value);

                std::map<std::string , double>::iterator it = btc.find(date);
                if(it != btc.end())
                {
                    std::cout << date << " => " << val << " = " << val * btc[date] << std::endl;
                }
                else
                {
                    std::map<std::string , double>::iterator  itl = btc.lower_bound(date);
                    if (itl == btc.begin())
                        throw std::runtime_error("Error: bad input => " + date);


                        itl--;
                    std::cout << date << " => " << val << " = " << val * itl->second << std::endl;
                }
            }
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() <<  std::endl;
        }
    }
}

void       BitcoinExchange::storeData()
{
    std::fstream file("data.csv");
    if(!file)
        throw std::runtime_error("Error: Cannot open file!");
    
    std::string line;
    std::getline(file , line);

    while (std::getline(file , line))
    {

        size_t pos = line.find(',');
        if(pos == std::string::npos)
            continue;
            
        std::string date   = line.substr(0, pos);
        std::string value  = line.substr(pos + 1);

        removeSpaces(date);
        removeSpaces(value);

        double   num = convertToNumber(value);    
        btc[date] = num;
    }
}

