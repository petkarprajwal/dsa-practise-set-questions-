#include<iostream>

using namespace std;

int fib(int n){
    if(n==0 ||n==1)return 1;

    else
        return fib(n-1)+fib(n-2);

}

int  main(){
    int n;
    cout<<"enter the value";
    cin>>n;

    int res=fib(n);
    cout<<"the result is "<<endl;
    cout<<res;

    return 0;
    

}