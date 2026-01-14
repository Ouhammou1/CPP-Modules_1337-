#include "PmergeMe.hpp"
PmergeMe::PmergeMe()
{
}

PmergeMe::~PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe &other )
{
    *this = other;
}
PmergeMe & PmergeMe::operator=(const PmergeMe &other )
{
    if(this != &other)
    {
        this->vec = other.vec;
        this->dqe = other.dqe;
    }
    return *this;
}


void    PmergeMe::displayBefore(std::vector<int> &v)
{
    std::cout << "Before:   ";
    for (size_t i = 0; i < v.size() ; i++)
        std::cout  << v[i] <<  " ";

    std::cout << std::endl;
}


void    PmergeMe::displayAfter(std::vector<int> &v)
{
    std::cout << "After:    ";
    for (size_t i = 0; i < v.size() ; i++)
        std::cout  << v[i] <<  " ";

    std::cout << std::endl;
}


std::vector<int>  PmergeMe::JacobsthalSequence(size_t n )
{
    std::vector<int> jac;
    if(n == 0)
        return jac;
    
    jac.push_back(0);
    if(n == 1)
        return jac;
    
    jac.push_back(1);

    for (size_t i = 2; i < n; i++)
    {
        size_t next = jac[i -1] + (2 * jac[i -2]);
        if(next >= n)
            break;
        jac.push_back(next);
    } 
    return jac;
}



double  PmergeMe::convertToNumber(std::string input)
{
    return std::atof(input.c_str());
}

void  PmergeMe::storeNumbers(std::string str)
{
    int n = convertToNumber(str);

    if(n <= 0)
        throw std::runtime_error("Error: invalid number");
    
    vec.push_back(n);
    dqe.push_back(n);
}

bool    PmergeMe::handleInput(std::string str)
{
    for (size_t i = 0; i < str.size(); i++)
    {
        if(str[i] != '*' &&
        str[i] != '+' &&
        str[i] != '-' &&
        str[i] != '/' &&
        str[i] != ' ' &&
        str[i] != '\t' &&
        !std::isdigit(str[i]))
            return false;

    }

    return true;
}


void    PmergeMe::sortPairs(std::vector<int> &v)
{
    for(size_t i = 0 ; i+1 < v.size() ; i+=2 )
    {
        if(v[i+1] < v[i])
        {
            std::swap(v[i], v[i + 1]);
        }
    }
}

void    PmergeMe::binaryInsert(std::vector<int> &v , int val)
{   
    size_t left = 0;
    size_t  right = v.size();

    while(left < right)
    {
        size_t mid = (left + right) / 2;
        if(val < v[mid])
            right = mid;
        else
            left = mid + 1;
    }
    v.insert(v.begin() + left , val);

}

std::vector<int> PmergeMe::MergeSort(std::vector<int> &small,std::vector<int> &big)
{
    std::vector<int> vectSort;
    size_t i = 0;
    size_t j = 0;

    while (i < small.size() && j < big.size())
    {
        if (small[i] < big[j])
            vectSort.push_back(small[i++]);
        else
            vectSort.push_back(big[j++]);
    }

    while (i < small.size())
        vectSort.push_back(small[i++]);

    while (j < big.size())
        vectSort.push_back(big[j++]);

    return vectSort;
}

std::vector<int> PmergeMe::InsertSorted(std::vector<int> &big)
{
    if (big.size() <= 1)
        return big;

    size_t mid = big.size() / 2;

    std::vector<int> left(big.begin(), big.begin() + mid);
    std::vector<int> right(big.begin() + mid, big.end());

    left = InsertSorted(left);
    right = InsertSorted(right);

    return MergeSort(left, right);
}



void    PmergeMe::runVector()
{

    displayBefore(vec);
    clock_t  start  = clock();

    sortPairs(vec);
    std::vector<int> small;
    std::vector<int> big;


    for (size_t i = 0; i +1 < vec.size() ; i+=2)
    {
        small.push_back(vec[i]);
        big.push_back(vec[i +1]);
    }
    if(vec.size() % 2 != 0)
        small.push_back(vec.back());


    big = InsertSorted(big);

    binaryInsert(big , small[0]);
    small.erase(small.begin());
    std::vector<bool> used(small.size() , false);

    std::vector<int> jac  = JacobsthalSequence(small.size());

    for (size_t i = 1; i < jac.size(); i++)
    {
        size_t index = jac[i] ;
        if(index < small.size() && !used[index])
        {
            binaryInsert(big , small[index]);
            used[index] = true;
        }
    }

    for (size_t i = 0; i < small.size(); i++)
    {
        if(!used[i])
            binaryInsert(big , small[i]);
    }
    
    clock_t end = clock();
    displayAfter(big);

    double duration = static_cast<double>(end - start)/ CLOCKS_PER_SEC * 1000000;
    std::cout << std::fixed << std::setprecision(5);
    std::cout  << "Time to process a range of " << vec.size() << " elements with std::vector : " << duration << " us" << std::endl;

}
