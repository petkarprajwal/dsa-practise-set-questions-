#include<iostream>
#include <vector>
#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int>v1={4,5,2,7,9,10,12,45,23,20,13,11,15,16,17,18,19,21,22,24,25,26,27,28,29,30};

    //sort(v1.begin(),v1.end());
    //stable_sort(v1.begin(),v1.end()); // Sort the vector in ascending order using stable_sort
    multiset<int>s(v1.begin(), v1.end()); // Create a multiset from the vector
    //the use of multiset is to store the elements in sorted order
    //and to allow duplicate elements

    cout<<"Sorted vector: ";
    for(int i:v1){
        cout<<i<<" "; // Print all elements of the sorted vector
    }
    return 0;
}