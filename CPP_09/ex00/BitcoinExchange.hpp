#ifndef BITCOIN_HPP
#define BITCOIN_HPP
#include    <iostream>
#include    <fstream>
#include    <map>

class BitcoinExchange
{
private:
    std::map<std::string , double> btc;
public:
    BitcoinExchange();
    BitcoinExchange(const BitcoinExchange &other);
    BitcoinExchange& operator=(const BitcoinExchange &other);
    ~BitcoinExchange();

    void    handleFileInput(std::string file);
    void    removeSpaces(std::string &str);
    double  convertToNumber(std::string input);


    bool      isValidDate(std::string date);
    void      isValidValue(std::string value);
    void      storeData();
};




#endif