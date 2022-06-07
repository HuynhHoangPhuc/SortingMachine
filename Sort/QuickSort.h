//
// Created by Phuc Huynh Hoang on 07/06/2022.
//

#ifndef SORTINGMACHINE_QUICKSORT_H
#define SORTINGMACHINE_QUICKSORT_H


#include <vector>
#include <stack>
#include <algorithm>

#include "SortInterface.h"

class QuickSort : public SortInterface {
public:
    void sort(std::vector<int> &data) override;
};


#endif //SORTINGMACHINE_QUICKSORT_H
