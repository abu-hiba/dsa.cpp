#include <iostream>
#include <limits>
#include <map>
#include <vector>

#include "utils/readvector.hpp"

bool isSubset(std::vector<int> vec1, std::vector<int> vec2) {
    std::vector<int> largerVec;
    std::vector<int> smallerVec;
    std::map<int, bool> map;

    if (vec1.size() > vec2.size()) {
        largerVec = vec1;
        smallerVec = vec2;
    } else {
        largerVec = vec2;
        smallerVec = vec1;
    }

    for (int i = 0; i < smallerVec.size(); i++) {
        bool foundMatch = false;

        for (int j = 0; j < largerVec.size(); j++) {
            if (smallerVec[i] == largerVec[j]) {
                foundMatch = true;
                break;
            }
        }

        if (foundMatch == false) {
            return false;
        }
    }

    return true;
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

    bool result = isSubset(vector1, vector2);
    if (result == 0) {
        std::cout << std::endl << "false" << std::endl;
    } else {
        std::cout << std::endl << "true" << std::endl;
    }

    return 0;
}
