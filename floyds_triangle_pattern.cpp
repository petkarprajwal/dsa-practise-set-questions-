#include<iostream>

using namespace std;

int main(){
    
    int n=4,nums=1;


    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<nums<<" ";
            nums++;

             
        }
        cout<<endl;

    }
    return 0;

}