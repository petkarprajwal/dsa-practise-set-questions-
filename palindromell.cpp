#include<iostream>
#include<stack>

using namespace std;

class sample {
public:
    class Node {
    public:
        int data;
        Node* link;

        Node(int val) {
            data = val;
            link = NULL;
        }
    };

    bool isPalindrome(Node* head) {
        stack<int> s;
        Node* curr = head;

        // Push all elements onto the stack
        while (curr) {
            s.push(curr->data);
            curr = curr->link;
        }

        // Compare elements from the stack with the linked list
        curr = head;
        while (curr) {
            if (curr->data != s.top()) {
                return false; // Not a palindrome
            }
            s.pop();
            curr = curr->link;
        }
        return true; // Is a palindrome
    }
};

int main() {
    sample s;
    cout << "Enter the number of nodes in linked list: ";
    int n;
    cin >> n;

    sample::Node* head = NULL;
    sample::Node* tail = NULL;

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        sample::Node* newNode = new sample::Node(val);
        if (!head) {
            head = newNode;
            tail = newNode;
        } else {
            tail->link = newNode;
            tail = newNode;
        }
    }

    if (s.isPalindrome(head)) {
        cout << "The linked list is a palindrome." << endl;
    } else {
        cout << "The linked list is not a palindrome." << endl;
    }

    return 0;
}
