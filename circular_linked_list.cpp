#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class CircularLinkedList {
    Node* tail;
public:
    CircularLinkedList() { tail = nullptr; }

    void insertAtEnd(int data) {
        Node* newNode = new Node(data);
        if (!tail) {
            tail = newNode;
            tail->next = tail;
        } else {
            newNode->next = tail->next;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void deleteFromStart() {
        if (!tail) {
            cout << "List is empty\n";
            return;
        }
        Node* head = tail->next;
        if (head == tail) {
            delete head;
            tail = nullptr;
        } else {
            tail->next = head->next;
            delete head;
        }
    }

    void deleteNode(int key) {
        if (!tail) {
            cout << "List is empty\n";
            return;
        }
        Node* curr = tail->next;
        Node* prev = tail;
        do {
            if (curr->data == key) {
                if (curr == tail) tail = prev;
                if (curr == tail->next) tail->next = curr->next;
                prev->next = curr->next;
                delete curr;
                return;
            }
            prev = curr;
            curr = curr->next;
        } while (curr != tail->next);
        cout << "Node not found\n";
    }

    void display() {
        if (!tail) {
            cout << "List is empty\n";
            return;
        }
        Node* curr = tail->next;
        do {
            cout << curr->data << " ";
            curr = curr->next;
        } while (curr != tail->next);
        cout << endl;
    }
};

int main() {
    CircularLinkedList cll;
    cll.insertAtEnd(10);
    cll.insertAtEnd(20);
    cll.insertAtEnd(30);
    cll.insertAtEnd(40);
    cll.display();

    cll.deleteNode(20);
    cll.display();

    cll.deleteNode(40);
    cll.display();

    cll.deleteFromStart();
    cll.display();

    cll.deleteFromStart();
    cll.display();

    cll.deleteFromStart();

    return 0;
}
