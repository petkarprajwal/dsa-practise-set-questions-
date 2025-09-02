#include <iostream>
#include <vector>
#include<math.h>

using namespace std;
bool isvalid(vector <int>&a,int n,int m,int max_allowed_time){
    int painters=1;
    int time=0;
    for (int i=0;i<n;i++){
        if(a[i]>max_allowed_time)return false;
        if(time+a[i]<=max_allowed_time){
            time+=a[i];
        }
        else{
            painters++;
            time=a[i];
        }
    }
    if(painters>m)return false;
    return true;
}
    
int allocate_painters(vector <int>&a,int n,int m){
    int sum=0;
    int maxvalue=0;

    for (int i=0;i<n;i++){
        sum+=a[i];
        maxvalue=max(maxvalue,a[i]);
    }

    int st=maxvalue;
    int end=sum;
    int ans=-1;


    while(st<=end){
        int mid=(st+end)/2;
        if(isvalid(a,n,m,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            
            st=mid+1;
        }
    }
    return ans;


}

int main()
{
    vector <int> a={40,30,20,10};
    int n=4;
    int m=2;
    cout<<allocate_painters(a,n,m)<<endl;
    return 0;
}
//time complexity O(logN *n)