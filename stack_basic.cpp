#include<iostream>

int stack[100];
int n=10;
int top=-1;

using namespace std;
class sample{
    public:
    void push(int data){
        if(top==n-1){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        top++;
        stack[top]=data;

    }
    void pop(){
        if(top==-1){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        int a=stack[top];
        top--;
        cout<<"Popped element is: "<<a<<endl;
    }
    int peek(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return stack[top];
    }
    int size(){
        return top+1;
    }
    bool isEmpty(){
        return top==-1;
    }
    void display(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
            return;
        }
        for(int i=top;i>=0;i--){
            cout<<stack[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    sample s;
    cout<<"1.push 2.pop 3.peek 4.size 5.isEmpty 6.display 7.exit"<<endl;
    int choice;
    cin>>choice;
    while(choice!=7){
        switch(choice){
            case 1:
            int data;
            cout<<"Enter data to push: ";
            cin>>data;
            s.push(data);
            break;
            case 2:
            s.pop();
            break;
            case 3:
            cout<<"Top element is: "<<s.peek()<<endl;
            break;
            case 4:
            cout<<"Size of stack is: "<<s.size()<<endl;
            break;
            case 5:
            if(s.isEmpty()){
                cout<<"Stack is empty"<<endl;
            }else{
                cout<<"Stack is not empty"<<endl;
            }
            break;
            case 6:
            s.display();
            break;
            default:
            cout<<"Invalid choice"<<endl;
        }
        cout<<"1.push 2.pop 3.peek 4.size 5.isEmpty 6.display 7.exit"<<endl;
        cin>>choice;
    }
    return 0;
}