#include<iostream>

using namespace std;

int  search(int a[],int n,int x){
    int l=0;
    int h=n-1;
    
    while(l<=h){
        int m=(l+h)/2;

        if(a[m]==x){
            return m;
        }
        if(a[m]<x){
            l=m+1;
        }
        else 
            h=m-1;
    }
    

};
int main(){
    int x;
    int a[8]={2,4,5,6,7,8,3,9};
    int n=sizeof(a)/sizeof(a[0]);

    cout<<"enter the searcxh element in the list "<<endl;
    cin>>x;
    int res=search(a,n,x);

    cout<<"the search elemnt is in the position "<<res<<endl;
    return 0;

}