#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:

    bool search_in_row(vector<vector<int>>& matrix, int target, int row) {
        int col = matrix[0].size();
        int st = 0;
        int end = col - 1;

        while (st <= end) {
            int mid = (st + end) / 2;
            if (matrix[row][mid] == target) return true;
            else if (matrix[row][mid] < target) st = mid + 1;
            else end = mid - 1;
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        int sr = 0, er = m - 1;

        // Binary search for correct row
        while (sr <= er) {
            int midr = (sr + er) / 2;

            if (target >= matrix[midr][0] && target <= matrix[midr][n - 1]) {
                // Found correct row → binary search inside it
                return search_in_row(matrix, target, midr);
            }

            if (target < matrix[midr][0])
                er = midr - 1;
            else
                sr = midr + 1;
        }

        return false;
    }
};
int main() {
    Solution sol;
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 50}
    };
    int target = 15;

    if (sol.searchMatrix(matrix, target)) {
        cout << "Target " << target << " found in the matrix." << endl;
    } else {
        cout << "Target " << target << " not found in the matrix." << endl;
    }

    return 0;
}
