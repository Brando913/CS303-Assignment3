#ifndef QUEUE_H
#define QUEUE_H

template <typename T>
class Queue {
private:
    struct Node {
        T data;
        Node* next;
        Node(T val) : data(val), next(nullptr) {}
    };

    Node* frontNode;
    Node* rearNode;
    int queueSize;

public:
    Queue();
    ~Queue();

    void push(T value);
    void pop();
    T front();
    int size();
    bool empty();
    void move_to_rear();
    void display();  // Helper function to display the elements in the queue
};

#endif
