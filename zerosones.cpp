#include<iostream>

using namespace std;

int swap(int i, int j){
    int temp=0;
    temp=i;
    i=j;
    j=temp;

    return 0;
}
int main(){
    int a[]={1,0,1,0,1,0};
    int left=0,n=6,right=n-1;

    while(left<=right){
        if(a[left]==1&& a[right]==0){
            swap(a[left],a[right]);
        
        }

        if(a[left]==0)left++;
        if(a[right]==1)right++;

    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;

    }

}