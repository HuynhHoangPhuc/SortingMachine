//
// Created by Phuc Huynh Hoang on 07/06/2022.
//

#ifndef SORTINGMACHINE_SORTINTERFACE_H
#define SORTINGMACHINE_SORTINTERFACE_H


#include <vector>

class SortInterface {
public:
    virtual void sort(std::vector<int> &data) = 0;
};


#endif //SORTINGMACHINE_SORTINTERFACE_H
