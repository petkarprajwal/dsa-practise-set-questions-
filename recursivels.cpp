#include<iostream>
using namespace std;

//first version of code
int search(int a[], int l, int h, int ele) {
    if (l > h) return -1;
    if (l < 0) return -1;
    if (a[l] == ele) return l;
    return search(a, l + 1, h, ele);
}

/*
// Your second version: search from end toward beginning
int search(int a[], int h, int ele) {
    int l = 0;

    if (l > h) return -1;
    if (l < 0) return -1;

    if (a[h] == ele) return h;

    // Recursive call with reduced high index
    return search(a, h - 1, ele);
}*/

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};  // Sample array
    int n = sizeof(a) / sizeof(a[0]);          // Size of array
    int x;

    cout << "Enter the search element: ";
    cin >> x;

    // Using the second version of search (searching from end)
    //int res = search(a, n - 1, x);

    int l = 0;
    int h = n - 1;
    int res = search(a, l, h, x);
    

    if (res == -1) {
        cout << "Result is invalid" << endl;
    } else {
        cout << "The search element is at index: " << res << endl;
    }

    return 0;
}
