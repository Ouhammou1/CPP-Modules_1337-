#include "BitcoinExchange.hpp"

int main(int ac , char **av)
{

    try{
        BitcoinExchange btc;
        
        if(ac != 2)
        {
            std::cerr << "Error: could not open file" << std::endl;
            return 1;
        }

        btc.storeData();
        btc.handleFileInput(av[1]);

        }
    catch(const std::exception& e)
    {
        std::cerr << e.what() <<  std::endl;
    }

    return 0;
}