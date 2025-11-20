#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& a) {
        int m = a.size();
        int n = a[0].size();
        
        vector<int> ans;
        int srow = 0, erow = m - 1;
        int scol = 0, ecol = n - 1;

        while (srow <= erow && scol <= ecol) {

            // top row
            for (int j = scol; j <= ecol; j++)
                ans.push_back(a[srow][j]);
            srow++;

            // right column
            for (int i = srow; i <= erow; i++)
                ans.push_back(a[i][ecol]);
            ecol--;

            // bottom row
            if (srow <= erow) {
                for (int j = ecol; j >= scol; j--)
                    ans.push_back(a[erow][j]);
                erow--;
            }

            // left column
            if (scol <= ecol) {
                for (int i = erow; i >= srow; i--)
                    ans.push_back(a[i][scol]);
                scol++;
            }
        }

        return ans;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vector<int> result = sol.spiralOrder(matrix);

    cout << "Spiral Order: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
