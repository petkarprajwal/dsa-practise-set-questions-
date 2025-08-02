#include<iostream>

using namespace std;

int main(){
    int a[]={5,1,3,6,9,2};
    int n=sizeof(a)/sizeof(a[0]);

    int smallest=999;
    for(int i=0;i<n;i++){
        if(a[i]<smallest){
            smallest=a[i];
        }
    }
    cout<<"the smallest number is "<<smallest;
}