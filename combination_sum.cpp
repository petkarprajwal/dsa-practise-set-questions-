#include<iostream>
#include<vector>
using namespace std;

#include <vector>
using namespace std;

class Solution {
public:
    void helper(vector<int>& candidates, int i, vector<int>& combin, vector<vector<int>>& ans, int target) {
        int n = candidates.size();

        if (target == 0) {
            ans.push_back(combin);
            return;
        }
        if (i == n || target < 0) return;

        // Include the current element
        combin.push_back(candidates[i]);
        helper(candidates, i, combin, ans, target - candidates[i]);  // stay on i (can reuse same number)
        combin.pop_back();

        // Exclude the current element and move forward
        helper(candidates, i + 1, combin, ans, target);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> combin;
        helper(candidates, 0, combin, ans, target);
        return ans;
    }
};
int main() {
    Solution sol;
    vector<int> candidates = {2, 3, 6, 7};
    int target = 7;

    vector<vector<int>> result = sol.combinationSum(candidates, target);

    cout << "Combinations that sum to " << target << " are:" << endl;
    for (const auto& combination : result) {
        cout << "[";
        for (int i = 0; i < combination.size(); ++i) {
            cout << combination[i];
            if (i != combination.size() - 1) cout << ", ";
        }
        cout << "]" << endl;
    }

    return 0;
}