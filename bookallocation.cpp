#include <iostream>
#include <vector>

using namespace std;
bool isvalid(vector <int>&a,int n,int m,int mid){
    int stud=1;
    int pages=0;
    for (int i=0;i<n;i++){
        if(a[i]>mid)return false;
        if(pages+a[i]<=mid){
            pages+=a[i];
        }
        else{
            stud++;
            pages=a[i];
        }
    }
    if(stud>m)return false;
    return true;
}
int allocate_books(vector <int>&a,int n,int m){
    int sum=0;
    for (int i=0;i<n;i++){
        sum+=a[i];
    }
    int st=0,ans=-1;
    int end=sum;

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
    vector <int> a={2,1,3,4};
    int n=4;
    int m=2;


    cout<<allocate_books(a,n,m)<<endl;
    return 0;
}
//time complexity O(logN *n)