//Brandon Alvarez De La Cruz
// CS303-Assignment 300
// 11-7-2024

#include <iostream>
#include "Queue.h"
using namespace std;

int main() {
    Queue<int> q;

    // a) Instantiate the queue with integers and push 10 values into the queue
    for (int i = 1; i <= 10; ++i) {
        q.push(i);
    }

    // b) Display all elements in the queue
    cout << "Queue elements after pushing 10 values: ";
    q.display();

    // c) Perform move_to_rear operation
    q.move_to_rear();
    cout << "Queue elements after moving front to rear: ";
    q.display();

    // Additional Testing of other queue operations
    cout << "Front element: " << q.front() << endl;
    cout << "Queue size: " << q.size() << endl;

    q.pop();  // Pop an element
    cout << "Queue after popping one element: ";
    q.display();

    return 0;
}
