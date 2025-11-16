#include <iostream>
#include <vector>
using namespace std;

class sample {
public:
    vector<vector<string>> solveNQueens(int n);
    void placeQueens(int row, int n, vector<string>& temp, vector<vector<string>>& board);
    bool isSafe(int row, int col, vector<string>& temp, int n);
};

// Function definitions outside the class using scope resolution operator (::)

vector<vector<string>> sample::solveNQueens(int n) {
    vector<vector<string>> board;
    vector<string> temp(n, string(n, '.'));
    placeQueens(0, n, temp, board);
    return board;
}

void sample::placeQueens(int row, int n, vector<string>& temp, vector<vector<string>>& board) {
    if (row == n) {
        board.push_back(temp);
        return;
    }

    for (int col = 0; col < n; col++) {
        if (isSafe(row, col, temp, n)) {
            temp[row][col] = 'Q';
            placeQueens(row + 1, n, temp, board);
            temp[row][col] = '.';
        }
    }
}

bool sample::isSafe(int row, int col, vector<string>& temp, int n) {
    // Check column
    for (int i = 0; i < row; i++) {
        if (temp[i][col] == 'Q') return false;
    }

    // Check upper-left diagonal
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
        if (temp[i][j] == 'Q') return false;
    }

    // Check upper-right diagonal
    for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
        if (temp[i][j] == 'Q') return false;
    }

    return true;
}

int main() {
    sample s;
    int n = 4;
    vector<vector<string>> result = s.solveNQueens(n);
    for (auto board : result) {
        for (auto row : board) {
            cout << row << endl;
        }
        cout << endl;
    }
    return 0;
}
