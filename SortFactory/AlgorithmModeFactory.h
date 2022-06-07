//
// Created by Phuc Huynh Hoang on 07/06/2022.
//

#ifndef SORTINGMACHINE_ALGORITHMMODEFACTORY_H
#define SORTINGMACHINE_ALGORITHMMODEFACTORY_H


#include "SortFactoryInterface.h"

class AlgorithmModeFactory : public SortFactoryInterface {
public:
    SortMethod createSort(const std::string &type) override;
};


#endif //SORTINGMACHINE_ALGORITHMMODEFACTORY_H
