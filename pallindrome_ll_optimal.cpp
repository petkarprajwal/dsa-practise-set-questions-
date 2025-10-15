#include<iostream>

using namespace std;

class Sample{
    public:class Node {
    public:
        int data;
        Node* link;

        Node(int val) {
            data = val;
            link = NULL;
        }
    };
    bool isPalindrome(Node* head) {
        if (!head || !head->link) return true; // Empty or single node is a palindrome

        // Find the middle of the linked list
        Node* slow = head;
        Node* fast = head;
        Node* prev = NULL;

        // Find middle and reverse first half simultaneously
        while (fast && fast->link) {
            fast = fast->link->link;
            
            // Reverse the first half while finding middle
            Node* temp = slow->link;
            slow->link = prev;
            prev = slow;
            slow = temp;
        }

        // If odd number of elements, skip the middle element
        Node* first = prev;  // Head of reversed first half
        Node* second = slow; // Head of second half
        
        if (fast) {
            second = slow->link; // Skip middle element for odd length
        }

        // Compare the reversed first half with the second half
        while (first && second) {
            if (first->data != second->data) {
                return false; // Not a palindrome
            }
            first = first->link;
            second = second->link;
        }
        
        return true; // Is a palindrome
    }

    
};
int main() {
    Sample s;
    cout << "Enter the number of nodes in linked list: ";
    int n;
    cin >> n;

    Sample::Node* head = NULL;
    Sample::Node* tail = NULL;

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        Sample::Node* newNode = new Sample::Node(val);
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
