#include<iostream>
#include<stack>

using namespace std;

int main(){
    // Create empty stack and push elements manually
    // Note: C++ stack doesn't support direct initialization with {1,2,3,4,5}
    stack<int> s;
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
    
    // pop() returns void, use top() to get value before popping
    int a = s.top(); s.pop();
    int b = s.top(); s.pop();
    int c = s.top();  // peek equivalent is top()
    bool d = s.empty();  // correct method name is empty()

    cout << "First element popped: " << a << endl;
    cout << "Second element popped: " << b << endl;
    cout << "The peeked element is: " << c << endl;
    cout << "Is the stack empty? " << d << endl;

    return 0;
}
