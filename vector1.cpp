#include<iostream>
#include <vector>
using namespace std;

int main(){
    //vector<int>v1={1,2,3,4,5};
    //vector<int> v1(5,0); // Initializing a vector of size 5 with all elements set to 0
    vector<char>v1={'a','b','c','d','e'}; // Initializing a vector of characters
    for (char i:v1){
        cout<<i<<endl; // Printing each element of the vector
    }
    //cout<<v1[0]<<endl; // Accessing the first element
    //cout<<v1[1]<<endl; // Accessing the second element
}