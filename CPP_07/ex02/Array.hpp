#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>


template <typename T>
class Array
{
private:
    T *data;
    unsigned int n;
public:
    Array();
    Array(unsigned int n);
    Array(const Array<T>& other );
    Array& operator=(const Array<T>& other );
    ~Array();

    void    display() const;
    T&    operator[](unsigned int index);
    const T& operator[](unsigned int index) const;

    unsigned int      size() const;
};


template <typename T>
Array<T>::Array(): data(NULL) , n(0)
{
}

template <typename T>
Array<T>::~Array()
{
    delete[] data;
}

template <typename T>
Array<T>::Array(unsigned int n):n(n)
{
    data = new T[n];
}

template <typename T>
Array<T>::Array(const Array<T>& other)
{
    n = other.n;
    data = new T[n];
    for(unsigned int i = 0; i < n ; i++)
        data[i] = other.data[i];
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other )
{
    if(this != &other)
    {
        delete[] data;
        n = other.n;
        data = new T[n];
        for(unsigned int i = 0; i < n ; i++)
            data[i] = other.data[i];
    }
    return *this;
}

template <typename T>
void    Array<T>::display() const
{
    for (unsigned int i = 0; i < n; i++)
    {
        std::cout << data[i] << "  ";
    }
    std::cout << std::endl;
}

template <typename T>
T&     Array<T>::operator[](unsigned int index)
{
    if(index >= n)
        throw  std::out_of_range("index is out of bounds");
    return data[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const
{
    if(index >= n)
        throw std::out_of_range("index is out of bounds");
    return data[index];
}

template <typename T>
unsigned int      Array<T>::size() const 
{   
    return n;
}




#endif