#include<iostream>
#include<list>
using namespace std;

//Fast and slow pointer approach to find middle element of linked list
class Node{
    public:
    int data;
    Node* link;
    Node(int val){
        data=val;
        link=NULL;
    }
};
class List{
 public:
    Node* head;
    Node* tail;
    public:
        List(){
            head=NULL;
            tail=NULL;
        }

        void push_front(int val) {
            Node* a = new Node(val);
            if (head == NULL) {
            head = tail = a;
            } else {
                a->link = head;
                head = a;
        }
    }

           //push element at the front
        bool detect_cycle() {
        if (head == NULL) {
            cout << "No element in the list" << endl;
            return false;
        }

        Node* slow = head;
        Node* fast = head;

        while (fast != NULL && fast->link != NULL) {
            slow = slow->link;
            fast = fast->link->link;

            if (slow == fast) {
                return true; // cycle detected
            }
        }

        return false; // no cycle
    } 
};
int main(){
    List l;
    l.push_front(1);
    l.push_front(2);
    l.push_front(3);
    l.push_front(4);
    l.push_front(5);
    bool res=l.detect_cycle();
    if(res!=false){
        cout<<"the cycle detected in the linked list"<<endl;
    }
    else{
        cout<<"no cycle detected in the linked list"<<endl;
    }
    return 0;
}

          
       
         