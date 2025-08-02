#include<iostream>

using namespace std;

int main(){
    int start=0,end=0,n=5,s=12,sum=0,a[]={1,2,3,7,5};

    while(end<n){
        sum=sum-a[start];
        start++;
        if(sum==5){
            cout<<start++<<end++<<endl;

        }
        end++;

    }
    cout<<"-1"<<endl;


}