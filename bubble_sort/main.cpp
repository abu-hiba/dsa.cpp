#include <cstdlib>
#include <iostream>
#include <ostream>

void bubbleSort(int arr[], int size) {
    int endIndex = size - 1;
    bool swapped = true;

    while (swapped) {
        swapped = false;
        for (int i = 0; i < endIndex; i++) {
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swapped = true;
            }
        }
    }
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

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::printf("Specify a list of integers e.g.:\n\n %s 8 3 5 20 1\n", argv[0]);
        return 1;
    }

    int arrSize = argc - 1;
    int arr[arrSize];

    for (int i = 0; i < arrSize; i++) {
        arr[i] = atoi(argv[i + 1]);
    }

    bubbleSort(arr, arrSize);
    printArray(arr, arrSize);

    return 0;
}

