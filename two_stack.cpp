#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    vector<int> v1 = {10, 20, 30, 40, 50};
    vector<int> v2 = {5, 15, 25, 35, 45};

    stack<int> s1, s2, s3;

    // Push elements into stacks (top will be the last element)
    for (int i = 0; i < v1.size(); i++)
        s1.push(v1[i]);

    for (int i = 0; i < v2.size(); i++)
        s2.push(v2[i]);

    // Merge both stacks into s3 (ascending order)
    while (!s1.empty() && !s2.empty()) {
        if (s1.top() < s2.top()) {
            s3.push(s1.top());
            s1.pop();
        } else {
            s3.push(s2.top());
            s2.pop();
        }
    }

    // Push remaining elements
    while (!s1.empty()) {
        s3.push(s1.top());
        s1.pop();
    }
    while (!s2.empty()) {
        s3.push(s2.top());
        s2.pop();
    }

    // Display merged stack (from top to bottom)
    cout << "Merged Stack: ";
    while (!s3.empty()) {
        cout << s3.top() << " ";
        s3.pop();
    }
    cout << endl;

    return 0;
}
