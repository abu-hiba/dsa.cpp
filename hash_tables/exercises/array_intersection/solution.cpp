#include <iostream>
#include <limits>
#include <map>
#include <vector>

#include "utils/printvector.hpp"
#include "utils/readvector.hpp"

std::vector<int> vectorIntersection(std::vector<int> vec1,
                                    std::vector<int> vec2) {
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

int main(int argc, char *argv[]) {
    std::vector<int> vector1 =
        readVector<int>("Enter a list of integers followed by any non-integer "
                        "character e.g.: \n1 2 3 4 5;");

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << std::endl;

    std::vector<int> vector2 =
        readVector<int>("Enter a second list of integers");

    std::vector<int> result = vectorIntersection(vector1, vector2);
    std::cout << std::endl << "Intersection:" << std::endl;
    printVector<int>(result);

    return 0;
}
