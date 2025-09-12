#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Function to print middle element (based on your notes)(Brute force approach O(n) + O(n)= O(2n) = O(n))
void printMiddle(Node* head) {
    // Step 1: Count size of LL
    int cnt = 0;
    Node* temp = head;
    while (temp != NULL) {
        cnt++;
        temp = temp->next;
    }

    // Step 2: Decide middle position
    int mid;
    if (cnt % 2 == 0)  // even
        mid = (cnt / 2) + 1;
    else               // odd
        mid = (cnt / 2) + 1;

    // Step 3: Traverse again to mid
    Node* ptr = head;
    for (int i = 1; i < mid; i++) {
        ptr = ptr->next;
    }

    cout << "Middle node value: " << ptr->data << endl;
}

int main() {
    // Create linked list 1->2->3->4->5->6
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);

    printMiddle(head);

    return 0;
}
