#include <iostream>
#include <map>
#include <string>

char nonDuplicate(std::string str) {
    std::map<char, int> chars;

    for (char c : str) {
        chars[c]++;
    }

    for (const auto& [key, value] : chars) {
        if (value == 1) {
            return key;
        }
    }

    return ' ';
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::printf("Specify a single string to search e.g.:\n\n %s "
                    "\"minimum\"\n",
                    argv[0]);
        return 1;
    }

    std::string stringToSearch = argv[1];

    char result = nonDuplicate(stringToSearch);
    std::cout << "First non-duplicate: " << result << std::endl;

    return 0;
}
