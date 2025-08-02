#include<iostream>

using namespace std;

int main()
{
    int i,j,k;
    int a[]={1,3,5,2};
    int n=sizeof(a)/sizeof(a[0]);
    int count=0;

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            for(int k=i+1;k<n;k++){
                if((i!=k && j!=k) && (a[j]+a[k]==a[i])){
                    count++;
                }


            }
        }
        

    }
    cout<<count<<endl;

}