#include<iostream>
#include<vector>

using namespace std;

class Solution {
public: 
    bool isSafe(vector<vector<char>>& board,int row,int col,char x){
        for(int i=0;i<9;i++){
            if(board[i][col]==x){
                return false;
            }
            if(board[row][i]==x){
                return false;
            }
            if(board[3*(row/3)+i/3][3*(col/3)+i%3]==x){
                return false;
            }
        }
        return true;
    }
    bool solveSudoku(vector<vector<char>>& board){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.'){
                    for(char x='1';x<='9';x++){
                        if(isSafe(board,i,j,x)){
                            board[i][j]=x;
                            if(solveSudoku(board)){
                                return true;
                            }else{
                                board[i][j]='.';
                            }
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void printBoard(vector<vector<char>>& board){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                cout<<board[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};
int main(){
    Solution s;
    vector<vector<char>> board = {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };

    if(s.solveSudoku(board)){
        cout<<"Solved Sudoku Board:"<<endl;
        s.printBoard(board);
    }else{
        cout<<"No solution exists"<<endl;
    }

    return 0;
}