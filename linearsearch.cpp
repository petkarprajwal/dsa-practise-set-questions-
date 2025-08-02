#include<iostream>

using namespace std;

int search(int a[],int n,int target){

    for(int i=0;i<n;i++){
        if(a[i]==target)return i;
    }
    return -1;

}
int main(){
    int a[5]={1,6,7,3,5};
    int n=sizeof(a)/sizeof(a[0]);
    int x;

    cout<<"enter the search element "<<endl;
    cin>>x;

    int res=search(a,n,x);

    if(res==-1){
        cout<<"the element not found"<<endl;

    }
    else{
        cout<<"the element is found at="<<res<<endl;
    }

}