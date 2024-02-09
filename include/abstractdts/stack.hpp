#ifndef STACK_H
#define STACK_H

#include <vector>

template <typename T> class Stack {
    std::vector<T> data = {};

  public:
    Stack() {}
    Stack(std::vector<T> vec) {
        this->data = vec;
    }

    void push(T element) {
        this->data.push_back(element);
    }

    T pop() {
        T element = this->data.back();
        this->data.pop_back();
        return element;
    }

    T read() {
        return this->data.back();
    }

    bool empty() {
        return this->data.empty();
    }
};

#endif
