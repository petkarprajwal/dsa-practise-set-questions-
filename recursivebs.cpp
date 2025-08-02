#include<iostream>

using namespace std;

int search(int a[],int n,int low,int high,int ele)
{
    while(low<=high){
        int mid=(low+high)/2;

        if(a[mid]==ele)return mid;

        if(a[mid]>ele)return search(a,n,low,mid-1,ele);
        
        else
            return search(a,n,mid+1,high,ele);

    }
    return -1;

}
int main(){
    int a[]={1,4,5,6,7,8,9};
    int n=sizeof(a)/sizeof(a[0]);
    int l=0;
    int h=n-1;
    int ele;

    cout<<"enter the search element "<<endl;
    cin>>ele;

    int res=search(a,n,l,h,ele);

    if(res==-1){
        cout<<"the element not found"<<endl;
    }
    else
        cout<<"the element is at the position "<<res<<endl;

    cout<<"Thank you"<<endl;
    
}