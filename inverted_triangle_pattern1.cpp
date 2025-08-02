#include<iostream>

using namespace std;

int main(){
    
    int n=3;
    char ch='A';

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            //spaces ka leya...
            cout<<" ";

             
        }
        for(int j=0;j<n-i;j++){
            cout<<ch;
        }
        ch++;
        cout<<endl;

    }
    return 0;

}