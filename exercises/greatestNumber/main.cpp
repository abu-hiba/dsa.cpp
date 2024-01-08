#include <iostream>

int greatestNumber(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        bool isIValTheGreatest = true;

        for (int j = 0; j < size; j++) {
            if (arr[j] > arr[i]) {
                isIValTheGreatest = false;
            }
        }

        if (isIValTheGreatest) {
            return arr[i];
        }
    }
    // shouldn't be reached
    return 0;
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

    int result = greatestNumber(arr, arrSize);

    std::cout << result << std::endl;

    return 0;
}

