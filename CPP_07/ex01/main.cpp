#include "iter.hpp"

void    toUpper(std::string &s)
{
    for (size_t i = 0; i < s.length(); i++)
    {
        s[i] = static_cast<char>(std::toupper(s[i]));
    }
}

int main()
{

    std::cout << "           Int          "<< std::endl << std::endl;

    int intArray[] = {1,6,98,7,6,3,2};
    int sizeArray = sizeof(intArray) / sizeof(intArray[0]);

    iter(intArray , sizeArray , printElement<int> );
    iter(intArray , sizeArray , increment<int> );
    std::cout << std::endl;
    iter(intArray , sizeArray , printElement<int> );
    std::cout << std::endl;

    std::cout << "           Double          "<< std::endl << std::endl;

    const double doubleArray[] = {1.3,6.9,9.8,8.7,15.6,3,2};
    int sizeArrayDouble = sizeof(doubleArray) / sizeof(doubleArray[0]);

    iter(doubleArray , sizeArrayDouble , printElement<double> );
    std::cout << std::endl;
    iter(doubleArray , sizeArrayDouble , printElement<double> );
    std::cout << std::endl;


    std::cout << "           string          "<< std::endl << std::endl;

    std::string strArray[] = {"aa", "bb" , "cc" , "dd"};

    iter(strArray , 4 , printElement<std::string>);
    std::cout << std::endl;
    iter(strArray , 4 , toUpper);
    iter(strArray , 4 , printElement<std::string>);
    std::cout << std::endl;

    std::cout << "           set to number          "<< std::endl << std::endl;


    int arr[] = {0,1,2,3,4};
    int len = sizeof(arr) / sizeof(arr[0]);


    iter(arr , len , printElement<int> );
    iter(arr , len , setToNumber<int> );
    std::cout << std::endl;
    iter(arr , len , printElement<int> );
    std::cout << std::endl;



    return 0;
}