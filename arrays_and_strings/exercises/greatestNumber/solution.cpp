#include <iostream>

int greatestNumber(int arr[], int size) {
    int greatestValue = arr[0];

    for (int i = 0; i < size; i++) {
        if (arr[i] > greatestValue) {
            greatestValue = arr[i];
        }
    }

    return greatestValue;
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

    int result = greatestNumber(arr, arrSize);

    std::cout << result << std::endl;

    return 0;
}
