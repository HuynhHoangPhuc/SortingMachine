//
// Created by Phuc Huynh Hoang on 07/06/2022.
//

#ifndef SORTINGMACHINE_INSERTIONSORT_H
#define SORTINGMACHINE_INSERTIONSORT_H


#include <vector>

#include "SortInterface.h"

class InsertionSort : public SortInterface {
public:
    void sort(std::vector<int> &data) override;
};


#endif //SORTINGMACHINE_INSERTIONSORT_H
