#include<iostream>

using namespace std;

int main(){
    int a[]={10,20,30,40,50,60};
    int n=sizeof(a)/sizeof(a[0]);
    int b[6]; 
    int j=0;

    for(int i=n-1; i>=0;i--){
        b[j++]=a[i--];    
    }
    int sum=0;
    for(int i=0;i<n;i++){
        if(i%2!=0){
            cout<<b[i]<<endl;
            sum=sum+b[i];
        }
    }
    cout<<sum;
    return 0;
}