//Brandon Alvarez De La Cruz
// CS303-Assignment 300
// 11-7-2024

#include <iostream>
#include "Queue.h"
using namespace std;

int main() {
    Queue<int> q;

    for (int i = 1; i <= 10; ++i) {
        q.push(i);
    }
//displays queue 
    cout << "Queue elements after pushing 10 values: ";
    q.display();
//move the first to last operation 
    q.move_to_rear();
    cout << "Queue elements after moving front to rear: ";
    q.display();

    cout << "Front element: " << q.front() << endl;
    cout << "Queue size: " << q.size() << endl;
//remove operation
    q.pop();
    cout << "Queue after popping one element: ";
    q.display();

    return 0;
}