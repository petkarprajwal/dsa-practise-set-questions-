/*Chef wrote a program to print the sum of two integers A and B, but due to a typo, the program prints their product instead.

Given the integers A and B, find the absolute difference between the correct output (A + B) and Chef's incorrect output (A × B).

Input Format:
A single line containing two space-separated integers A and B.

Output Format:
Print a single integer — the absolute difference between A + B and A × B.
*/
#include<iostream>

using namespace std;

int abs_diff(int a,int b)
{
    int c=a*b;
    int d=a+b;
    int e=abs(c-d);
    return e;

}
int main(){
    int a,b;
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"the absoulute difference is "<<abs_diff(a,b)<<endl;

    return 0;

}