#include<iostream>

using namespace std;

int main(){
    
    int n=3;

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            //spaces ka leya...
            cout<<" ";

             
        }
        for(int j=1;j<i+1;j++){
            //numbers to print 
            cout<<j;
        }
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;

    }
    return 0;

}