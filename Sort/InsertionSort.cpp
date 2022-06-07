//
// Created by Phuc Huynh Hoang on 07/06/2022.
//

#include "InsertionSort.h"

void InsertionSort::sort(std::vector<int> &data) {
    int n = static_cast<int>(data.size());
    for (int i = 1; i < n; i++) {
        int key = data[i];
        int j = i - 1;

        while (j >= 0 && data[j] > key) {
            data[j + 1] = data[j];
            j = j - 1;
        }
        data[j + 1] = key;
    }
}
