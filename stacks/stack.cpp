#include <iostream>
#include <ostream>
#include <vector>

template <typename T> class Stack {
    std::vector<T> data = {};

  public:
    Stack() {}
    Stack(std::vector<T> vec) { this->data = vec; }

    void push(T element) { this->data.push_back(element); }

    T pop() {
        T element = this->data.back();
        this->data.pop_back();
        return element;
    }

    T read() { return this->data.back(); }
};

int main(int argc, char *argv[]) {
    Stack<int> s = Stack<int>({ 1, 2, 3 });
    Stack<int> s1 = Stack<int>();
    Stack<std::string> s2 = Stack<std::string>();

    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(20);

    s2.push("hello");
    s2.push("world");
    s2.push("abc");
    std::cout << s2.pop() << std::endl;
    std::cout << s2.read() << std::endl;

    std::cout << s.read() << std::endl;
    std::cout << s.pop() << std::endl;
    std::cout << s.read() << std::endl;

    std::cout << s1.read() << std::endl;
    std::cout << s1.pop() << std::endl;
    std::cout << s1.read() << std::endl;

    return 0;
}
