//
// Created by Phuc Huynh Hoang on 07/06/2022.
//

#ifndef SORTINGMACHINE_BUBBLESORT_H
#define SORTINGMACHINE_BUBBLESORT_H


#include <vector>
#include <algorithm>

#include "SortInterface.h"

class BubbleSort : public SortInterface {
public:
    void sort(std::vector<int> &data) override;
};


#endif //SORTINGMACHINE_BUBBLESORT_H
