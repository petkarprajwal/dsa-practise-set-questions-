//there are certain functions in the vector 
#include<iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    //vector<int> v1={1,2,3,4,5,6,7,8,9,10};
    /*cout<<"size "<< v1.size() << endl; // Output the size of the vector
    cout<<"capacity "<< v1.capacity() << endl; // Output the capacity of the vector
    cout<<"max size "<< v1.max_size() << endl; // Output the maximum size of the vector
    cout<<"front "<< v1.front() << endl; // Output the first element of the vector
    cout<<"back "<< v1.back() << endl; // Output the last element of the vector
    */
    vector <int> v1;
    v1.push_back(11); 
    v1.push_back(12);
    v1.push_back(13); // Add elements to the end of the vector
    cout<<"after push back "<< v1.size() << endl;
    cout<<"capacity "<< v1.capacity() << endl; // Output the capacity after adding elements 
    /*cout<<"vector elements: ";
    for(int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << endl; // to display the whole vector 
    // Output the size after          
    v1.pop_back(); // Remove the last element (pop_back doesn't return a value)
    cout<<"after pop back, size: "<< v1.size() << endl;
    cout<<"at 0 "<< v1.at(0) << endl; // Access the first element using at()
    cout<<"at 1 "<< v1.at(1) << endl; // Access the*/
    v1.insert(v1.begin(),100);
    for(int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    if(v1.empty()){//to see if the vector is empty
        cout << "Vector is empty" << endl;
    } else {
        cout << "Vector is not empty" << endl;
    }

    // Check if the vector is empty
    // Note: v1.begin() and v1.end() are iterators, not functions
    if(v1.begin()==v1.end()){
        cout << "Vector is empty" << endl;
    } else {
        cout << "Vector is not empty" << endl;
    }

    //to reverse the vector
    cout << "Reversing the vector: ";
    reverse(v1.begin(), v1.end());
    for(int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    vector<int> v = {1, 3, 5, 7, 9};
    vector<int> temp(v.size());

    // Reverse copying the vector into temp vector
    reverse_copy(v.begin(), v.end(), temp.begin());

    // Copying back reversed vector
    v = temp;

    return 0;

}