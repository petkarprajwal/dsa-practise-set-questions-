#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
    Node(int x) : val(x), prev(NULL), next(NULL), child(NULL) {}
};

class Solution {
public:
    Node* flatten(Node* head) {
        if (!head) return head;
        Node* curr = head;
        while (curr) {
            if (curr->child) {
                Node* next = curr->next;
                curr->next = flatten(curr->child);
                curr->next->prev = curr;
                curr->child = NULL;

                // move curr to the tail of the flattened child
                while (curr->next) curr = curr->next;

                // attach back the saved 'next'
                if (next) {
                    curr->next = next;
                    next->prev = curr;
                }
            }
            curr = curr->next;
        }
        return head;
    }
};

// Helper to print list
void printList(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main() {
    // Level 1: 1 - 2 - 3 - 4
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->prev = head;
    head->next->next = new Node(3);
    head->next->next->prev = head->next;
    head->next->next->next = new Node(4);
    head->next->next->next->prev = head->next->next;

    // Level 2: child of 2 → 7 - 8 - 9 - 10
    Node* child1 = new Node(7);
    child1->next = new Node(8);
    child1->next->prev = child1;
    child1->next->next = new Node(9);
    child1->next->next->prev = child1->next;
    child1->next->next->next = new Node(10);
    child1->next->next->next->prev = child1->next->next;
    head->next->child = child1;

    // Level 3: child of 8 → 11 - 12
    Node* child2 = new Node(11);
    child2->next = new Node(12);
    child2->next->prev = child2;
    child1->next->child = child2;

    // Level 4: child of 12 → 13
    Node* child3 = new Node(13);
    child2->next->child = child3;

    // Flatten
    Solution s;
    Node* flatHead = s.flatten(head);

    cout << "Flattened list: ";
    printList(flatHead);

    return 0;
}

