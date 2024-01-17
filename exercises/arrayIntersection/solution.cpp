#include <iostream>
#include <limits>
#include <map>
#include <string>
#include <vector>

std::vector<int> vectorIntersection(std::vector<int> vec1, std::vector<int> vec2) {
    std::map<int, bool> map;
    std::vector<int> intersection;

    for (int value : vec1) {
        map[value] = true;
    }

    for (int value : vec2) {
        if (map[value]) {
            intersection.push_back(value);
        }
    }

    return intersection;
}

void printVector(std::vector<int> vec) {
    for (int value : vec) {
        std::cout << value << " ";
    }
    std::cout << std::endl;
}

std::vector<int> readVector(std::string message) {
    int input;
    std::vector<int> inputVector;

    std::cout << message << std::endl;

    while (std::cin >> input) {
        inputVector.push_back(input);
    }

    return inputVector;
}

int main(int argc, char *argv[]) {
    std::vector<int> vector1 =
        readVector("Enter a list of integers followed by any non-integer "
                   "character e.g.: \n1 2 3 4 5;");

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << std::endl;

    std::vector<int> vector2 =
        readVector("Enter a second list of integers followed by any "
                   "non-integer character e.g.: \n0 2 4 6 8;");

    std::vector<int> result = vectorIntersection(vector1, vector2);
    std::cout << std::endl << "Intersection:" << std::endl;
    printVector(result);

    return 0;
}
