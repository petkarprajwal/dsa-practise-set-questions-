/*Two Way Linear Search Algorithm
Last Updated : 15 May, 2024
Two-Way Linear Search Algorithm is based on the principle of Linear Search, but the search is conducted from both ends towards the center 
of the array. In this article, we will learn about the basics of Two Way Linear Search Algorithm, its advantages, implementation etc.

What is Two-Way Linear Search?
Two Way Linear Search is a searching technique where we start our search from both the ends of the array simultaneously and
move towards the center until we find the target element.

We maintain two pointers, one pointing at the start and other pointing at the end and compare elements at start and end with the target 
element. If any of them is equal to target, then we know that we have found the target element. Otherwise, we move start to the next index 
and move end to the previous index and again compare the corresponding elements. Two Way Linear Search stops either when we find the target 
element or when start and end cross each other (start > end).

Algorithm for Two-Way Linear Search:
Below is the step-by-step algorithm for Two-Way Linear Search:

Initialize the search indices start=0 and end=N-1 (where N is the size of the array).
While the elements at indexes start and end are not equal to the search element, increment start by 1 and decrement end by 1.
Continue looping until start <= end; the loop terminates once it reaches the middle of the array.
If the element is found, return its index; otherwise, return -1.
*/

#include<iostream>

using namespace std;

int search(int a[],int n,int ele){
    int l=0;
    int h=n-1;

    while(l<=h){
        if(a[l]==ele){
            return l;

        }
        else if(a[h]==ele){
            return h;
        }
        else{
            l++;
            h--;

        }
    }
};
int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int n=10;
    int x;
    cout<<"enter the search element";
    cin>>x;
    
    int res=search(a,n,x);
    cout<<"the element is at position at"<<res;

    return 0;
}