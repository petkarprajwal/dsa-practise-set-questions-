#include<iostream>
using namespace std;

class CircularQueue {
    int* arr;
    int capacity,currentSize;
    int front=0,rear=-1;

public:
    CircularQueue(int cap) {
        capacity = cap;
        arr = new int[capacity];
        currentSize = 0;
    }
    void enqueue(int val) {
        if (currentSize == capacity) {
            cout << "Queue Overflow" << endl;
            return;
        }
        rear = (rear + 1) % capacity;
        arr[rear] = val;
        currentSize++;
    }
    void dequeue() {
        if (currentSize == 0) {
            cout << "Queue Underflow" << endl;
            return;
        }
        front = (front + 1) % capacity;
        currentSize--;
    }
    int getFront() {
        if (currentSize == 0) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[front];
    }
    bool isEmpty() {
        return currentSize == 0;
    }
    int size() {
        return currentSize;
    }
};
int main() {
    CircularQueue cq(3);
    cq.enqueue(1);
    cq.enqueue(2);
    cq.enqueue(3);
    cq.enqueue(4); // Queue Overflow

    cout << cq.getFront() << endl; // 1
    cq.dequeue();
    cout << cq.getFront() << endl; // 2
    cq.dequeue();
    cq.enqueue(4);
    cout << cq.getFront() << endl; // 3
    cq.dequeue();
    cout << cq.getFront() << endl; // 4
    cq.dequeue();
    cq.dequeue(); // Queue Underflow

    return 0;
}

