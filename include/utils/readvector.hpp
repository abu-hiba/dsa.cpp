#ifndef READ_VECTOR_H
#define READ_VECTOR_H

#include <iostream>
#include <string>
#include <vector>

template <typename T> std::vector<T> readVector(std::string message) {
    T input;
    std::vector<T> inputVector;

    std::cout << message << std::endl;

    while (std::cin >> input) {
        inputVector.push_back(input);
    }

    return inputVector;
}

#endif
