#include<iostream>

using namespace std;

int floorsqrt(int n){
    int res=1;

    while(res*res <=n)res++;

    return res-1;    
}
int main(){
    int n=9;
    int a=floorsqrt(n);
    cout<<"the result is "<<a<<endl;
}