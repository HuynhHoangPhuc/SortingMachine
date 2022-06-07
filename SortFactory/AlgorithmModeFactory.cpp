//
// Created by Phuc Huynh Hoang on 07/06/2022.
//

#include "AlgorithmModeFactory.h"

#include "../Sort/QuickSort.h"
#include "../Sort/BubbleSort.h"
#include "../Sort/InsertionSort.h"

SortMethod AlgorithmModeFactory::createSort(const std::string &type) {
    if (type == "quick-sort") return std::make_unique<QuickSort>();
    if (type == "bubble-sort") return std::make_unique<BubbleSort>();
    if (type == "insertion-sort") return std::make_unique<InsertionSort>();
    return nullptr;
}
