#include<iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <int>v1={1,2,3,4,5};
    vector<int>v2={6,7,8,9,10};

    swap(v1,v2);
    cout<<"v1 after swap: ";
    for(int i:v1){  
        cout<<i<<" "; // Print all elements of v1 after swap
    }
    cout<<endl;

    cout<<"v2 after swap: ";
    for(int i:v2){
        cout<<i<<" "; // Print all elements of v2 after swap
    }
    cout<<endl;

    return 0;
}