/*Given an even integer n, representing the size of an n × n chessboard, determine how many black cells are present on the board.

Input Format:
A single even integer n — the size of the chessboard.

Output Format:
Print the number of black cells on the n × n chessboard.

Constraints:

2 ≤ n ≤ 100

n is even*/
#include<iostream>

using namespace std;

int black(int n){
    int a=0;
    a=n/2;
    return a;

}
int main(){
    int n,a;
    cout<<"enter the size of chess board "<<endl;
    cin>>n;
    a=n*n;
    cout<<"the number of cells in the chess boards in total is "<<a<<endl;
    int res=black(a);
    cout<<"the no of black cells is "<<res;

    return 0;

}