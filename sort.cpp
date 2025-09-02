#include<iostream>
#include<vector>  // Required for vector

using namespace std;

// Pass by reference to actually swap values
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Display elements of the vector
void display(const vector<int>& a) {
    for(int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

// Bubble sort algorithm
void bubble_sort(vector<int>& a) {
    int n = a.size();
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
    cout << "Sorted array:(Bubble sort) ";
    display(a);
}
//selection sort algorithm
void selection_sort(vector<int>& a) {
    int n=a.size();
    for(int i=0; i<n-1; i++) {
        int pos=i;
        for(int j=i+1;j<n;j++) {
            if(a[j]<a[pos]){
                pos=j;
            }
        }
        swap(a[i], a[pos]);
    }
    cout << "Sorted array:(Selection sort) ";
    display(a);
}

//Insertion sort algorithm
void insertion_sort(vector<int>& a){
    int n=a.size();
    
    for(int i=1;i<n;i++) {
        int key=a[i];
        if(a[i]<a[i-1]){
            int j=i-1; // means comapare with the last sorted element
            while(j>=0 && a[j]>key){
                a[j+1]=a[j]; // shifting the elements
                j--;
            }
            a[j+1]=key;
        }
    }
    cout << "Sorted array:(Insertion sort) ";
    display(a);
}
int main() {
    vector<int> a={20,10,45,05,30,25,15,60,70,65};  // Initializing with some values
    bubble_sort(a);  // Calling the sorting function
    selection_sort(a);  // Calling the selection sort function
    insertion_sort(a);  // Calling the insertion sort function
    return 0;
}
