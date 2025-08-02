#include<iostream>

using namespace std;

void changearray(int a[],int n){
    cout<<"in the functions "<<endl;
        for(int i=0;i<n;i++){
        a[i]=2*a[i];

    }
}

int main(){
    int a[]={5,1,3,6,9,2};
    int n=sizeof(a)/sizeof(a[0]);

    changearray(a,n);
    cout<<"the array in main function";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";

    }

}