#include <iostream>
#include <vector>
#include <memory>
#include <cstring>

#include "SortFactory/SortFactoryInterface.h"
#include "SortFactory/AlgorithmModeFactory.h"
#include "SortFactory/ComparisionModeFactory.h"

void printArray(const std::vector<int> &data) {
    for (const auto &value: data) {
        std::cout << value << ' ';
    }
    std::cout << std::endl;
}

int main(int argc, char **argv) {
    std::vector<int> data{1, 5, 2, 7, 3};
    std::unique_ptr<SortFactoryInterface> factory;

    if (strcmp(argv[1], "-a") == 0) {
        factory = std::make_unique<AlgorithmModeFactory>();
        factory->createSort(std::string(argv[2]))->sort(data);
        printArray(data);
    } else if (strcmp(argv[1], "-c") == 0) {
        std::vector<int> tempData(data);
        factory = std::make_unique<ComparisionModeFactory>();
        auto sortMethod = factory->createSort(argv[2], argv[3]);
        sortMethod[0]->sort(data);
        printArray(data);
        sortMethod[1]->sort(tempData);
        printArray(tempData);
    }
    return 0;
}
