//
// Created by Phuc Huynh Hoang on 07/06/2022.
//

#include "BubbleSort.h"

void BubbleSort::sort(std::vector<int> &data) {
    int n = static_cast<int>(data.size());
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (data[j] > data[j + 1]) {
                std::swap(data[j], data[j + 1]);
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }
}
