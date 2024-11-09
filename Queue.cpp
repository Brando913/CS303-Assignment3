#include "Queue.h"
#include <iostream>
using namespace std;

template <typename T>
Queue<T>::Queue() : frontNode(nullptr), rearNode(nullptr), queueSize(0) {}

template <typename T>
Queue<T>::~Queue() {
    while (!empty()) {
        pop();
    }
}

template <typename T>
void Queue<T>::push(T value) {
    Node* newNode = new Node(value);
    if (rearNode) {
        rearNode->next = newNode;
        rearNode = newNode;
    }
    else {
        frontNode = rearNode = newNode;
    }
    queueSize++;
}

template <typename T>
void Queue<T>::pop() {
    if (empty()) {
        cerr << "Queue is empty!" << endl;
        return;
    }

    Node* temp = frontNode;
    frontNode = frontNode->next;
    delete temp;
    queueSize--;

    if (frontNode == nullptr) {
        rearNode = nullptr;
    }
}

template <typename T>
T Queue<T>::front() {
    if (empty()) {
        cerr << "Queue is empty!" << endl;
        return T(); // Return default value
    }
    return frontNode->data;
}

template <typename T>
int Queue<T>::size() {
    return queueSize;
}

template <typename T>
bool Queue<T>::empty() {
    return queueSize == 0;
}

template <typename T>
void Queue<T>::move_to_rear() {
    if (empty() || queueSize == 1) return; // Nothing to move if queue is empty or has only one element

    T value = front();
    pop();
    push(value);
}

template <typename T>
void Queue<T>::display() {
    Node* current = frontNode;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

