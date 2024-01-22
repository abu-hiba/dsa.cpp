#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <ostream>

int binarySearch(int val, int arr[], int size) {
    int lowerBound = 0;
    int upperBound = size - 1;

    while (upperBound >= lowerBound) {
        int midPoint = (lowerBound + upperBound) / 2;
        int mid = arr[midPoint];

        if (mid == val) {
            return midPoint;
        }

        if (mid > val) {
            upperBound = midPoint - 1;
        }

        if (mid < val) {
            lowerBound = midPoint + 1;
        }
    }

    return -1;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (i == size - 1) {
            std::cout << arr[i] << std::endl;
        } else {
            std::cout << arr[i] << " ";
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        std::printf("Specify a list of integers e.g.:\n\n %s 8 3 5 20 1\n",
                    argv[0]);
        return 1;
    }

    int arrSize = argc - 1;
    int arr[arrSize];

    for (int i = 0; i < arrSize; i++) {
        arr[i] = atoi(argv[i + 1]);
    }

    std::sort(arr, arr + arrSize);
    std::cout << "Sorted array: ";
    printArray(arr, arrSize);

    int searchValue;
    std::cout << "Specify an integer to search for:" << std::endl;
    std::cin >> searchValue;

    int result = binarySearch(searchValue, arr, arrSize);

    if (result > -1) {
        std::printf("%d can be found at index %d\n", searchValue, result);
    } else {
        std::printf("%d can not be found in array\n", searchValue);
    }

    return 0;
}
