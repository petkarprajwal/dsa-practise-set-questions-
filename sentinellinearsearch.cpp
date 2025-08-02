#include<iostream>

using namespace std;

int search(int a[],int n,int target){
    int last=a[n-1];
    a[n-1]=target;
    int i=0;

    while(a[i]!=target)i++;
    
    if(i<n-1 || last==target)return i;

    else return -1;

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