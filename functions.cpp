/*You are given:

N = total new users in a contest

A = users who didn't make any submission

B = users who submitted but didn’t solve anything

Task:
Print two values:

Number of users who will get a rating → N - A

Number of users who will get a rating greater than 1000 → N - A - B

Input: 3 integers: N A B
Output: 2 integers: N - A and N - A - B (separated by space)

*/

#include<iostream>

using namespace std;

void  ratings(int n,int a,int b){
    int c,d;
    c=n-a;
    cout<<"the number of students who get ratings is "<<c<<endl;
    d=c-b;

    cout<<"the number of students who get rating  1000 "<<d<<endl;

}
int main()
{
    int n,a,b;
    cout<<"enter the total number of student"<<endl;
    cin>>n;
    cout<<"enter the number of student who solved the problem but not submited"<<endl;
    cin>>a;
    cout<<"enter students who subm,ited but answers are wrong"<<endl;
    cin>>b;

    ratings(n,a,b);

    return 0;

}