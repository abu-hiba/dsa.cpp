#ifndef PRINT_ARRAY_H
#define PRINT_ARRAY_H

#include <iostream>

template <typename T> void printArray(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (i == size - 1) {
            std::cout << arr[i] << std::endl;
        } else {
            std::cout << arr[i] << " ";
        }
    }
}

#endif
