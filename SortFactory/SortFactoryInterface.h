//
// Created by Phuc Huynh Hoang on 07/06/2022.
//

#ifndef SORTINGMACHINE_SORTFACTORYINTERFACE_H
#define SORTINGMACHINE_SORTFACTORYINTERFACE_H


#include <memory>
#include <string>
#include <array>

#include "../Sort/SortInterface.h"

using SortMethod = std::unique_ptr<SortInterface>;

class SortFactoryInterface {
public:
    virtual SortMethod createSort(const std::string &type) {};

    virtual std::array<SortMethod, 2> createSort(const std::string &type, const std::string &other) {};
};


#endif //SORTINGMACHINE_SORTFACTORYINTERFACE_H
