#include<iostream>
#include<list>

/*
STL OPERATIONS 
list<int>li;
li.push_back(1);
li.push_back(2);
li.push_back(3);

li.push_front(0);
li.push_front(-1);

li.pop_back();
li.pop_front();
li.remove(2); //removes all the occurrences of the element 2
li.search(3); //returns the iterator to the element 3
li.sort(); //sorts the list
li.reverse(); //reverses the list
li.size(); //returns the size of the list  

li.insert(4,3); //inserts 4 at the position 3
li.clear(); //clears the list
*/

/*Basic operations */
class Node{
    public:int data;
    Node* link;

    Node(int val){
        data=val;
        link=Null;

    }
};
class List{
    private:
           Node* head;
           Node* tail;
    public:
           List(){
            head=NULL;
            tail=NULL;
           }

           //push element at the front
           void push_front(int val){
            Node* a=new Node(val);
            if(head==Null){
                head=tail=a;
            }
            else{
                a->link=head;
                head=a;
            }
           }


           //push element at the back 
           void push_back(int val){
            Node* a=new Node(val);
            if(head==Null){
                head=tail=a;
            }
            else{
                tail->link=a;
                tail=a;
            }
            
           }

           //pop element from the front
           void pop_front(){
            if(head==Null){
                cout<<"list is emepty"<<endl;
                return;
            }
            Node* temp=head;
            head=head->link;
            cout<<"popped elemnt is"=<<temp->data<<endl;
            delete temp;
           }

           //pop element from the back
           void pop_back(){
            if(head==Null){
                cout<<"list is empty"<<endl;
                return;
            }
            Node* temp=head;
            while(temp->link!=tail){
                temp=temp->link;
            }
            temp->link=Null;
            cout<<"the poped element is="<<tail->data<<endl;
            delete(tail);
            tail=temp;
            }
            //print elements or linked list
            void print(){
                if(head==Null){
                    cout<<"no element in the list"<<endl;
                }
                Node* temp=head;
                while(temp!=Null){
                    cout<<temp->data<<" ";
                    temp=temp->link;
                }
            }

            //insert an element in the middle of the linked list
            void insert(int val,int pos){
                if(pos<0){
                    cout<<"no element in list"<<endl;
                }
                Node* ele=new Node(val);
                Node* temp=head;
                if(pos==0){ //push front 
                    ele->link=head;
                    head=ele;
                    return;
                }
                for(int i=0;i<pos-1;i++){
                    temp=temp->link;
                }
                ele->link=temp->link;
                temp->link=ele;
            }

            //search element in linked list 
            void search(int ele){
                if(head==Null){
                    cout<<"no element exists"<<endl;
                }
                else{
                    Node* temp=head;
                    int i=0;
                    while(temp!=Null){
                        if(temp->data==ele){
                            cout<<i;
                            return;
                        }
                        else{
                            temp=temp->link;
                            i++;
                        }
                    }
                    cout<<"not found";
                    return;
                }
            }
};
int main(){
    List l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_front(0);
    l.push_front(-1);
    l.print();
    cout<<endl;
    l.pop_back();
    l.pop_front();
    l.print();
    cout<<endl;
    l.insert(4,3);
    l.print();
    cout<<endl;
    l.search(3);
    return 0;
}
