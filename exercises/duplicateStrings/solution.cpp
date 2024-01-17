#include <iostream>
#include <map>
#include <string>
#include <vector>

std::string findDuplicate(std::vector<std::string> strings) {
    std::map<std::string, bool> map;

    for (std::string s : strings) {
        if (map[s]) {
            return s;
        } else {
            map[s] = true;
        }
    }

    return "";
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        std::printf(
            "Specify a list of strings e.g.:\n\n %s abc def ghi def jkl\n",
            argv[0]);
        return 1;
    }

    int size = argc - 1;
    std::vector<std::string> strings;

    for (int i = 0; i < size; i++) {
        strings.push_back(argv[i]);
    }

    std::string result = findDuplicate(strings);

    std::cout << result << std::endl;

    return 0;
}
