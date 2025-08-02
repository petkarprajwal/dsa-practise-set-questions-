#include<iostream>

using namespace std;

int main(){
    int a[]={12,35,1,10,34,1};
    int n=sizeof(a)/sizeof(a[0]);
    int s1,s2,s3;
    int max;
    
    for(int i = 0; i<n;i++)
    {
        if(max<a[i])    max = a[i];
    }

    int diff = 0;

    for(int i = 0; i<n;i++)
    {
        if(max-a[i]>diff )  
        {
            diff = (max-a[i]);
            pos = i;
        }   
    }

    

    

}