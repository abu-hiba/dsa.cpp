#ifndef QUEUE_H
#define QUEUE_H

#include <vector>

template <typename T> class Queue {
    std::vector<T> data = {};

  public:
    Queue() {}
    Queue(std::vector<T> vec) {
        this->data = vec;
    }

    void enqueue(T element) {
        this->data.push_back(element);
    }

    T dequeue() {
        T element = this->data.front();
        this->data.erase(this->data.begin());
        return element;
    }

    T read() {
        return this->data.front();
    }

    bool empty() {
        return this->data.empty();
    }

    void clear() {
        this->data.clear();
    }
};

#endif
