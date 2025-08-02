#include<iostream>

using namespace std;

int main(){
    int a[]={12,35,1,10,34,1};
    int n=sizeof(a)/sizeof(a[0]);
    int s1,s2;
    s1=s2=-1;
    for(int i=0;i<n;i++){
        if(a[i]>s1){
            s2=s1;
            s1=a[i];

        }
        else if(a[i]>s2 && a[i]<s1){
            s2=a[i];

        }
    }
    cout<<s2<<endl;
    

}