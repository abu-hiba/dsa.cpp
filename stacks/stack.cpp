#include <iostream>
#include <ostream>
#include <vector>

template <typename T> class Stack {
    std::vector<T> data = {};

  public:
    // Stack() {}
    // Stack(std::vector<T> vec) { this->data = vec; }

    void push(T element) { this->data.push_back(element); }

    T pop() {
        T element = this->data.back();
        this->data.pop_back();
        return element;
    }

    T read() { return this->data.back(); }
};

int main(int argc, char *argv[]) {
    Stack<int> s = Stack<int>();

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(20);

    std::cout << s.read() << std::endl;
    std::cout << s.pop() << std::endl;
    std::cout << s.read() << std::endl;

    return 0;
}
