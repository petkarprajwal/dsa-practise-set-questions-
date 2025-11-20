#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int tar) {
        int m=mat.size();
        int n=mat[0].size();

        int r=0, c=n-1;
        while(r<m && c>=0){
            if(tar==mat[r][c])return true;

            else if(tar < mat[r][c])c--;
            else if (tar> mat[r][c])r++;

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
    int target = 11;

    if (sol.searchMatrix(matrix, target)) {
        cout << "Target " << target << " found in the matrix." << endl;
    } else {
        cout << "Target " << target << " not found in the matrix." << endl;
    }

    return 0;
}