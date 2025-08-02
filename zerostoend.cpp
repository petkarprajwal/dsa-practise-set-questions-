#include<iostream>

using namespace std;

void zeroend(int a[],int n){
    int index=0;

    for(int i=0;i<n;i++){
        if(a[i]!=0)
            a[index++]=a[i];
        
    }
    while(index<n) a[index++]=0;

    for(int i=0;i<n;i++) cout<<a[i]<<" ";

}
int main(){
    int a[]={1,2,0,0,3};
    //int b [100];
    int n=sizeof(a)/sizeof(a[0]);

    zeroend(a,n);

}