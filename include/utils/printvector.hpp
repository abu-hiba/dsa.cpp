#ifndef PRINT_VECTOR_H
#define PRINT_VECTOR_H

#include <iostream>
#include <vector>

template <typename T> void printVector(std::vector<T> vec) {
    for (T value : vec) {
        std::cout << value << " ";
    }
    std::cout << std::endl;
}

#endif
