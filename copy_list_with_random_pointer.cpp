#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head == NULL) return NULL;

        unordered_map<Node*, Node*> m;

        // First pass: copy nodes and next pointers
        Node* newHead = new Node(head->val);
        Node* old_temp = head->next;
        Node* new_temp = newHead;
        m[head] = newHead;

        while (old_temp != NULL) {
            Node* copyNode = new Node(old_temp->val);
            m[old_temp] = copyNode;
            new_temp->next = copyNode;
            old_temp = old_temp->next;
            new_temp = new_temp->next;
        }

        // Second pass: assign random pointers
        old_temp = head;
        new_temp = newHead;
        while (old_temp != NULL) {
            new_temp->random = (old_temp->random != NULL) ? m[old_temp->random] : NULL;
            old_temp = old_temp->next;
            new_temp = new_temp->next;
        }

        return newHead;
    }
};

// Utility function to print list (val + random)
void printList(Node* head) {
    while (head != NULL) {
        cout << "Node val = " << head->val;
        if (head->random != NULL)
            cout << ", Random points to = " << head->random->val;
        else
            cout << ", Random = NULL";
        cout << endl;
        head = head->next;
    }
}

int main() {
    // Create original list: 1 -> 2 -> 3
    Node* n1 = new Node(1);
    Node* n2 = new Node(2);
    Node* n3 = new Node(3);
    n1->next = n2;
    n2->next = n3;

    // Assign random pointers
    n1->random = n3; // 1 -> random -> 3
    n2->random = n1; // 2 -> random -> 1
    n3->random = NULL;

    cout << "Original List:" << endl;
    printList(n1);

    Solution s;
    Node* copied = s.copyRandomList(n1);

    cout << "\nCopied List:" << endl;
    printList(copied);

    return 0;
}
