#include <cstdio>
#include <cstdlib>

#include "utils/printarray.hpp"

void insertionSort(int arr[], int size) {
    int current;
    int testIndex;

    for (int i = 1; i < size; i++) {
        current = arr[i];
        testIndex = i - 1;

        while (testIndex >= 0 && arr[testIndex] > current) {
            arr[testIndex + 1] = arr[testIndex];
            testIndex -= 1;
        }

        arr[testIndex + 1] = current;
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

    insertionSort(arr, arrSize);
    printArray<int>(arr, arrSize);

    return 0;
}
