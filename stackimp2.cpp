#include <iostream>
//implementation of stack using Linked List(List)
#include <list>
using namespace std;

class Stack {
    list<int> ll;

public:
    void push(int data) {
        ll.push_front(data);
    }

    void pop() {
        if (!ll.empty()) {
            ll.pop_back();
        } else {
            cout << "Stack Underflow!" << endl;
        }
    }

    int top() {
        if (!ll.empty()) {
            return ll.back();
        } else {
            cout << "Stack is empty!" << endl;
            return -1;
        }
    }

    int size() {
        return ll.size();
    }

    bool empty() {
        return ll.empty();
    }
};

int main() {
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    cout << "Stack size: " << s.size() << endl;

    int a = s.top(); s.pop();
    int b = s.top(); s.pop();
    int c = s.top();  // peek equivalent is top()
    bool d = s.empty();  // check if stack is empty

    cout << "First element popped: " << a << endl;
    cout << "Second element popped: " << b << endl;
    cout << "The peeked element is: " << c << endl;
    cout << "Is the stack empty? " << (d ? "Yes" : "No") << endl;

    return 0;
}
