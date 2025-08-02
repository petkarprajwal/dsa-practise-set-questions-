#include<iostream>

using namespace std;

int main(){
    int a[]={1,2,3,4,5,6,7,8,9};
    int t;
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"enter the target"<<endl;
    cin>>t;

    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if(a[i]+a[j]+a[k]==t){
                    cout<<"["<<i<<","<<j<<","<<k<<"]"<<endl;
                }

            }
        }
    }

}