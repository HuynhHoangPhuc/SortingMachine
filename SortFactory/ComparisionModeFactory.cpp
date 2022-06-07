//
// Created by Phuc Huynh Hoang on 07/06/2022.
//

#include "ComparisionModeFactory.h"

std::array<SortMethod, 2> ComparisionModeFactory::createSort(const std::string &type, const std::string &other) {
    auto firstSort = std::make_unique<AlgorithmModeFactory>();
    auto secondSort = std::make_unique<AlgorithmModeFactory>();
    return {firstSort->createSort(type), secondSort->createSort(other)};
}
