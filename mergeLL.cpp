#include<iostream>

using namespace std;

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

        List(){
            head=NULL;
            tail=NULL;
        }
        void push_back(int val){
            Node* a=new Node(val);
            if(head==NULL){
                head=tail=a;
            }
            else{
                tail->link=a;
                tail=a;
            }
        }
        void display(){
            Node* temp=head;
            while(temp!=NULL){
                cout<<temp->data<<"->";
                temp=temp->link;
            }
            cout<<"NULL"<<endl;
        }
    };
int main(){
    List l1;
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(4);
    l1.push_back(5);
    cout<<"First linked list: "<<endl;
    l1.display();
    
    List l2;
    l2.push_back(6);
    l2.push_back(7);
    l2.push_back(8);
    l2.push_back(9);
    l2.push_back(10);
    cout<<"Second linked list: "<<endl;
    l2.display();
    cout<<"\n\n";

    l1.tail->link=l2.head;
    cout<<"After merging two linked list: "<<endl;
    l1.display();

    return 0;


}    