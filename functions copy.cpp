/*In a coding contest, N new users participated.

A users only viewed the problems and made no submissions — they will not get any rating.

B users submitted solutions but solved nothing correctly — they will get a rating between 800 and 1000.

The remaining users solved at least one problem — they will get a rating strictly greater than 1000.

Given: Three integers N, A, and B.
Output: Print two integers:

Total users who will get a rating → N - A

Users who will get a rating greater than 1000 → N - A - B

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