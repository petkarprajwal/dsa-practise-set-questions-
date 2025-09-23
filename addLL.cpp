#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode dummy(0);
    ListNode* current = &dummy;
    int carry = 0;

    while (l1 || l2 || carry) {
        int sum = carry;
        if (l1) { sum += l1->val; l1 = l1->next; }
        if (l2) { sum += l2->val; l2 = l2->next; }
        carry = sum / 10;
        current->next = new ListNode(sum % 10);
        current = current->next;
    }
    return dummy.next;
}

void printList(ListNode* head) {
    while (head) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {
    // Example 1: 342 + 465 = 807
    ListNode* l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);

    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);

    cout << "Example 1:\n";
    printList(l1);
    printList(l2);
    printList(addTwoNumbers(l1, l2));

    // Example 2: 99 + 1 = 100
    ListNode* l3 = new ListNode(9);
    l3->next = new ListNode(9);

    ListNode* l4 = new ListNode(1);

    cout << "\nExample 2:\n";
    printList(l3);
    printList(l4);
    printList(addTwoNumbers(l3, l4));

    return 0;
}
