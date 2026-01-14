#include "PmergeMe.hpp"


void    PmergeMe::displayAfterDeque(std::deque<int> &d)
{
    std::cout << "Before:   ";
    for (size_t i = 0; i < d.size() ; i++)
        std::cout  << d[i] <<  " ";

    std::cout << std::endl;
}


void    PmergeMe::displayBeforeDeque(std::deque<int> &d)
{
    std::cout << "After:    ";
    for (size_t i = 0; i < d.size() ; i++)
        std::cout  << d[i] <<  " ";

    std::cout << std::endl;
}



void    PmergeMe::sortPairsDeque(std::deque<int> &d)
{
    for (size_t i = 0; i +1  < d.size(); i+=2)
    {
        if(d[i+1] < d[i])
            std::swap(d[i+1] , d[i]);
    }
    
}

void    PmergeMe::binaryInsertDeque(std::deque<int> &d , size_t val)
{
    size_t left = 0;
    size_t right = d.size();

    while (left < right)
    {
        size_t mid = (left + right) / 2;
        if(val < mid)
            right  =mid;
        else
            left = mid +1;
    }
    d.insert(d.begin() + left , val);
}


std::deque<int> PmergeMe::MergeSortDeque(std::deque<int> &small,std::deque<int> &big)
{
    std::deque<int> dqetSort;
    size_t i = 0;
    size_t j = 0;

    while (i < small.size() && j < big.size())
    {
        if (small[i] < big[j])
            dqetSort.push_back(small[i++]);
        else
            dqetSort.push_back(big[j++]);
    }

    while (i < small.size())
        dqetSort.push_back(small[i++]);

    while (j < big.size())
        dqetSort.push_back(big[j++]);

    return dqetSort;
}

std::deque<int> PmergeMe::InsertSortedDeque(std::deque<int> &big)
{
    if (big.size() <= 1)
        return big;

    size_t mid = big.size() / 2;

    std::deque<int> left(big.begin(), big.begin() + mid);
    std::deque<int> right(big.begin() + mid, big.end());

    left = InsertSortedDeque(left);
    right = InsertSortedDeque(right);

    return MergeSortDeque(left, right);
}


std::deque<int>  PmergeMe::JacobsthalSequenceDeque(size_t n )
{
    std::deque<int> jac;
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
void                PmergeMe::runDeque()
{
    sortPairsDeque(dqe);
    clock_t  start  = clock();
    std::deque<int> small;
    std::deque<int> big;

    for (size_t i = 0; i + 1 < dqe.size() ; i+=2)
    {
        small.push_back(dqe[i]);
        big.push_back(dqe[i+1]);
    }
    if(dqe.size() %2 != 0)
        small.push_back(dqe.back());
    
    big = InsertSortedDeque(big);

    binaryInsertDeque(big , small[0]);
    small.erase(small.begin());
    std::deque<bool> used(small.size() , false);

    std::deque<int> jac  = JacobsthalSequenceDeque(small.size());

    for (size_t i = 1; i < jac.size(); i++)
    {
        size_t index = jac[i] ;
        if(index < small.size() && !used[index])
        {
            binaryInsertDeque(big , small[index]);
            used[index] = true;
        }
    }

    for (size_t i = 0; i < small.size(); i++)
    {
        if(!used[i])
            binaryInsertDeque(big , small[i]);
    }
    
    clock_t end = clock();

    double duration = static_cast<double>(end - start)/ CLOCKS_PER_SEC * 1000000;
    std::cout << std::fixed << std::setprecision(5);
    std::cout  << "Time to process a range of " << vec.size() << " elements with std::deque  : " << duration << " us" << std::endl;


}
