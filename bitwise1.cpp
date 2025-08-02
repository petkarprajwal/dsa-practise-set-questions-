/*
solve 
a&b
a|b
a^b
c<<d
c>>d*/

#include<iostream>

using namespace std;

int main(){
    int a,b,c,d,p,q,r,s,t;
    cout<<"enter the value of a,b,c,d"<<endl;
    cin>>a>>b>>c>>d;
    p=a&b;
    q=a|b;
    r=a^b;
    s=c<<d;
    t=c>>d;
    cout<<"a&b"<<p<<endl;
    cout<<"a|b"<<q<<endl;
    cout<<"a^b"<<r<<endl;
    cout<<"c<<d"<<s<<endl;
    cout<<"c>>d"<<t<<endl;

    return 0;

}