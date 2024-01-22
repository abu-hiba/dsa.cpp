#include <iostream>
#include <map>
#include <string>

char missingLetter(std::string str) {
    std::map<char, bool> testChars;

    for (char c : str) {
        testChars[c] = true;
    }

    for (char l = 'a'; l <= 'z'; l++) {
        if (!testChars[l]) {
            return l;
        }
    }

    return ' ';
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::printf("Specify a single string to search e.g.:\n\n %s "
                    "\"the quick brown box jumps over a lazy dog\"\n",
                    argv[0]);
        return 1;
    }

    std::string stringToSearch = argv[1];

    char result = missingLetter(stringToSearch);
    std::cout << "Missing letter: " << result << std::endl;

    return 0;
}
