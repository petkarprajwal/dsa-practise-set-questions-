#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
class CircularQueue{
    Node* front;
    Node* rear;
    int currentSize;
    int capacity;
    public:
    CircularQueue(int cap){
        front=rear=NULL;
        capacity=cap;
        currentSize=0;
    }
    void enqueue(int val){
        if(currentSize==capacity){
            cout<<"Queue Overflow"<<endl;
            return;
        }
        Node* n=new Node(val);
        if(front==NULL){
            front=rear=n;
            rear->next=front; //pointing rear to front to make it circular
        }
        else{
            rear->next=n;
            rear=n;
            rear->next=front; //maintaining circular nature
        }
        currentSize++;
    }
    void dequeue(){
        if(currentSize==0){
            cout<<"Queue Underflow"<<endl;
            return;
        }
        Node* todelete=front;
        if(front==rear){ //only one element
            front=rear=NULL;
        }
        else{
            front=front->next;
            rear->next=front; //maintaining circular nature
        }
        delete todelete;
        currentSize--;
    }
    int getFront(){
        if(currentSize==0){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return front->data;
    }
    bool isEmpty(){
        return currentSize==0;
    }
    int size(){
        return currentSize;
    }
};
int main(){
    CircularQueue cq(3);
    cq.enqueue(1);
    cq.enqueue(2);
    cq.enqueue(3);
    cq.enqueue(4); // Queue Overflow

    cout<<cq.getFront()<<endl; // 1
    cq.dequeue();
    cout<<cq.getFront()<<endl; // 2
    cq.dequeue();
    cq.enqueue(4);
    cout<<cq.getFront()<<endl; // 3
    cq.dequeue();
    cout<<cq.getFront()<<endl; // 4
    cq.dequeue();
    cq.dequeue(); // Queue Underflow

    return 0;
}