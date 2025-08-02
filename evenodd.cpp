#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char str[] = "17";
    int n = strlen(str);

    cout<<n<<endl;
    cout<<str<<endl;

    if(str[n] == 1 || str[n] == 3 || str[n] == 5 || str[n] == 7 || str[n] == 9)
    {
        cout<<"Odd Number"<<endl;
    }
    else    cout<<"Even Number"<<endl;
}