#include "Serializer.hpp"

int main()
{
    Data *data =  new Data;


    data->name = "OUHAMMOU";
    data->nbr = 1337.42;
    data->num = 1337;

    std::cout << "ptr = " << data  << std::endl;

    uintptr_t  raw =  Serializer::serialize(data);

    std::cout << "raw = " << raw  << std::endl;


    Data *ptr = Serializer::deserialize(raw);
    
    std::cout << "ptr = " << ptr->name << std::endl;
    std::cout << "ptr = " << ptr->nbr << std::endl;
    std::cout << "ptr = " << ptr->num << std::endl;

    delete data;

    return 0;
}