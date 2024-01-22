#include <iostream>
#include <string>

bool containsX(std::string str) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'X') {
            return true;
        }
    }
    return false;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::printf("Specify a single string to search e.g.:\n\n %s "
                    "eXample\nor\n %s \"example string\"\n",
                    argv[0], argv[0]);
        return 1;
    }

    std::string stringToSearch = argv[1];

    bool result = containsX(stringToSearch);

    if (result == 1) {
        std::cout << "true" << std::endl;
    } else if (result == 0) {
        std::cout << "false" << std::endl;
    }

    return 0;
}
