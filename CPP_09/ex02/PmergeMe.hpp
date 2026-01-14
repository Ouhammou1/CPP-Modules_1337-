#ifndef PMERGEMR_HPP
#define PMERGEMR_HPP
#include <iostream>
#include <vector>
#include <deque>
#include <ctime>
#include <iomanip>


class PmergeMe
{
private:
    std::vector<int>    vec;
    std::deque<int>     dqe;
public:
    PmergeMe();
    PmergeMe(const PmergeMe &other );
    PmergeMe & operator=(const PmergeMe &other );
    ~PmergeMe();


    double            convertToNumber(std::string input);
    bool              handleInput(std::string str);
    void              storeNumbers(std::string str);

    
    void                runVector();
    void                sortPairs(std::vector<int> &v);
    void                binaryInsert(std::vector<int> &v , int val);
    std::vector<int>    MergeSort(std::vector<int> &small ,std::vector<int> &big);
    std::vector<int>    InsertSorted(std::vector<int> &v);
    std::vector<int>    JacobsthalSequence(size_t n );
    void                displayAfter(std::vector<int> &v);
    void                displayBefore(std::vector<int> &v);
    
    

    void                runDeque();
    void                sortPairsDeque(std::deque<int> &d);
    void                binaryInsertDeque(std::deque<int> &d , size_t val);
    std::deque<int>     MergeSortDeque(std::deque<int> &small ,std::deque<int> &big);
    std::deque<int>     InsertSortedDeque(std::deque<int> &big);
    std::deque<int>     JacobsthalSequenceDeque(size_t n );
    void                displayAfterDeque(std::deque<int> &v);
    void                displayBeforeDeque(std::deque<int> &v);






};


#endif