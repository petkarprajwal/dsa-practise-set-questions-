#include<iostream>
#include <vector>
#include<stack>
#include <bits/stdc++.h>// Using bits/stdc++.h for convenience, though not recommended in production code

using namespace std;

int main(){
    vector<int>v1={1,2,3,4,5}; // Initializing a vector with elements
    stack<int> s; // Initializing a stack of integers

    //push all elements into stack 
    for(int i:v1){
        s.push(i);
    }

    //push all the elements form the stack to the vector 
    while(!s.empty()){
        v1.push_back(s.top()); // Push the top element of the stack to the vector
    }
    for(int i:v1){
        cout<<i<<" "; // Print all elements of the vector
    }
    return 0;

}