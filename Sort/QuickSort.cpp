//
// Created by Phuc Huynh Hoang on 07/06/2022.
//

#include "QuickSort.h"

int partition(std::vector<int> &data, int start, int end) {
    int pivot = data[start];

    int count = 0;
    for (int i = start + 1; i <= end; i++) {
        if (data[i] <= pivot) {
            count++;
        }
    }

    int pivotIndex = start + count;
    std::swap(data[pivotIndex], data[start]);

    int i = start, j = end;

    while (i < pivotIndex && j > pivotIndex) {
        while (data[i] <= pivot) {
            i++;
        }

        while (data[j] > pivot) {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex) {
            std::swap(data[i++], data[j--]);
        }
    }

    return pivotIndex;
}

void QuickSort::sort(std::vector<int> &data) {
    std::stack<int> range;

    range.push(0);
    range.push(static_cast<int>(data.size() - 1));

    while (!range.empty()) {
        int end = range.top();
        range.pop();
        int start = range.top();
        range.pop();

        int pivot = partition(data, start, end);

        if (pivot - 1 > start) {
            range.push(start);
            range.push(pivot - 1);
        }

        if (pivot + 1 < end) {
            range.push(pivot + 1);
            range.push(end);
        }
    }
}
