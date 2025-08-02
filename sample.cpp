//to print non repeting elements
#include<iostream>

using namespace std;
int main(){
    int a[]={1,2,3,4,3,2,1};
    int n=sizeof(a)/sizeof(a[0]);
    int res=0;
    for(int i=0;i<n;i++){
        res=res^a[i];

    }
    cout<<res;
    return 0;
}
