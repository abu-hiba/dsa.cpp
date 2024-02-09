#include <iostream>
#include <map>
#include <sstream>

#include "abstractdts/stack.hpp"

class Linter {
    Stack<char> stack = Stack<char>();

  public:
    std::string lint(std::string text) {
        stack.clear();

        for (char &character : text) {
            if (this->isOpeningBrace(character)) {
                this->stack.push(character);

            } else if (this->isClosingBrace(character)) {
                std::stringstream message = std::stringstream();

                if (this->stack.empty()) {
                    std::stringstream().swap(message);
                    message << character << " does not have opening brace";
                    return message.str();
                }

                char poppedOpeningBrace = this->stack.pop();
                
                if (this->isNotAMatch(poppedOpeningBrace, character)) {
                    std::stringstream().swap(message);
                    message << character << " has mismatched opening brace";
                    return message.str();
                }
            }
        }

        if (!this->stack.empty()) {
            char unClosedBrace = this->stack.read();
            std::stringstream message;
            message << unClosedBrace << " does not have closing brace";
            return message.str();
        }

        return "No errors found";
    }

  private:
    bool isOpeningBrace(char brace) {
        return brace == '(' || brace == '[' || brace == '{';
    }

    bool isClosingBrace(char brace) {
        return brace == ')' || brace == ']' || brace == '}';
    }

    bool isNotAMatch(char openingBrace, char closingBrace) {
        std::map<char, char> bracePairs = {{'(', ')'}, {'[', ']'}, {'{', '}'}};
        return closingBrace != bracePairs[openingBrace];
    }
};

int main() {
    Linter linter = Linter();

    std::string text1 = "const x = { y: [1, 2, 3] }";
    std::string text2 = "(x.y.includes(1)))";
    std::string text3 = "const z = [1, 2, 3";

    std::string jsCode = "const x = { y: [1,2,3] };"
    "const z = x.y.filter((item) => { return item < 3 });"
    "if (z.length) {"
    "   console.log({ z });"
    "}";

    std::cout << linter.lint(text1) << std::endl;
    std::cout << linter.lint(text2) << std::endl;
    std::cout << linter.lint(text3) << std::endl;
    std::cout << linter.lint(jsCode) << std::endl;

    return 0;
};
