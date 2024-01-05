#include <cstdlib>
#include <iostream>
#include <ostream>

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int smallestIndex = i;

        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[smallestIndex]) {
                smallestIndex = j;
            }
        }

        if (smallestIndex != i) {
            int temp = arr[i];
            arr[i] = arr[smallestIndex];
            arr[smallestIndex] = temp;
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

    selectionSort(arr, arrSize);
    printArray(arr, arrSize);

    return 0;
}

