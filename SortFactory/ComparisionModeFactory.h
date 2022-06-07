//
// Created by Phuc Huynh Hoang on 07/06/2022.
//

#ifndef SORTINGMACHINE_COMPARISIONMODEFACTORY_H
#define SORTINGMACHINE_COMPARISIONMODEFACTORY_H


#include "SortFactoryInterface.h"
#include "AlgorithmModeFactory.h"

class ComparisionModeFactory : public SortFactoryInterface{
public:
    std::array<SortMethod, 2> createSort(const std::string &type, const std::string &other) override;
};


#endif //SORTINGMACHINE_COMPARISIONMODEFACTORY_H
