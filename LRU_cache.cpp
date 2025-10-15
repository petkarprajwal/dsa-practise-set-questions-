#include <bits/stdc++.h>
#include<iostream>
#include<unordered_map>

using namespace std;

class LRUCache {
public:
    class Node {
    public:
        int key, val;
        Node* next;
        Node* prev;

        Node(int k, int v) {
            key = k;
            val = v;
            prev = next = NULL;
        }
    };

    Node* head = new Node(-1, -1);
    Node* tail = new Node(-1, -1);
    unordered_map<int, Node*> m;
    int limit;

    // Constructor
    LRUCache(int capacity) {
        limit = capacity;
        head->next = tail;
        tail->prev = head;
    }

    // Add a node right after head (most recently used)
    void addNode(Node* temp) {
        Node* nextNode = head->next;
        head->next = temp;
        temp->prev = head;
        temp->next = nextNode;
        nextNode->prev = temp;
    }

    // Delete a specific node from the list
    void delNode(Node* temp) {
        Node* nextNode = temp->next;
        Node* prevNode = temp->prev;
        prevNode->next = nextNode;
        nextNode->prev = prevNode;
    }

    // Get value of key and move it to front (most recently used)
    int get(int key) {
        if (m.find(key) == m.end()) {
            cout << "Key " << key << " not found in cache.\n";
            return -1;
        }
        Node* node = m[key];
        int res = node->val;

        // Move accessed node to front
        m.erase(key);
        delNode(node);
        addNode(node);
        m[key] = node;

        cout << "Accessed key " << key << " → value = " << res << "\n";
        return res;
    }

    // Insert or update value in cache
    void put(int key, int value) {
        if (m.find(key) != m.end()) {
            Node* oldNode = m[key];
            m.erase(key);
            delNode(oldNode);
            delete oldNode; // optional cleanup
        }

        // Remove least recently used if cache is full
        if (m.size() == limit) {
            Node* lru = tail->prev;
            cout << "Cache full. Removing LRU key " << lru->key << "\n";
            m.erase(lru->key);
            delNode(lru);
            delete lru;
        }

        // Add new node
        Node* newNode = new Node(key, value);
        addNode(newNode);
        m[key] = newNode;

        cout << "Inserted key " << key << " → value = " << value << "\n";
    }

    // Display current state of cache
    void displayCache() {
        cout << "\nCache state (Most recent → Least recent): ";
        Node* temp = head->next;
        while (temp != tail) {
            cout << "[" << temp->key << ":" << temp->val << "] ";
            temp = temp->next;
        }
        cout << "\n";
    }
};

int main() {
    cout << "---- LRU Cache Demonstration ----\n";

    LRUCache cache(3); // capacity = 3

    cache.put(1, 10);
    cache.put(2, 20);
    cache.put(3, 30);
    cache.displayCache();

    cache.get(1);  // Access key 1 (becomes most recent)
    cache.displayCache();

    cache.put(4, 40); // Should remove key 2 (least recently used)
    cache.displayCache();

    cache.get(2); // Key 2 was removed
    cache.displayCache();

    cache.put(5, 50); // Should remove key 3
    cache.displayCache();

    cache.get(1); // Still present
    cache.displayCache();

    return 0;
}
