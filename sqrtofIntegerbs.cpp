#include<iostream>

using namespace std;

int search(int a[],int low,int high,int ele){
    int res=1;

    int mid;

    while(low<=high){
        mid=(low+high)/2;

        if(mid*mid<=ele){
            res=mid;
            low=mid+1;
            
        }else{
            high=mid-1;

        }

    }
    return res;
}
int main(){
    int a[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(a)/sizeof(a[0]);
    int low=0,high=n-1,ele,res;

    cout<<"enter the element ";
    cin>>ele;
    res=search(a,low,high,ele);
    cout<<"given element="<<ele<<" is a  floor of number="<<res<<endl;
    return 0;

}