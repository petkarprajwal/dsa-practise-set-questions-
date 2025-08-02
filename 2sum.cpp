#include<iostream>

using namespace std;

int main(){
    int a[]={0,1,0,5};
    int t;
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"enter the target"<<endl;
    cin>>t;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==t){
                cout<<"["<<i<<","<<j<<"]"<<endl;

            }
        }
    }

}