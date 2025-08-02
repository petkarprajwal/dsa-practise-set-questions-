#include<iostream>

using namespace std;

int main()
{
    int a[]={1,2,3,2,3,3,4,4,4,4};
    int n=sizeof(a)/sizeof(a[0]);
    int i,j,count=1;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j])count++;
            else
                continue;

        }
        if(count%2==0)
            cout<<a[i]<<endl;
        else
            continue;

    }
}