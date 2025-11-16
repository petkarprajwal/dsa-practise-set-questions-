#include<iostream>
#include<vector>
#include<string>
#include <algorithm>

using namespace std;
class Solution {
public:
    bool is_palin(const string& s) {
        string s2 = s;
        reverse(s2.begin(), s2.end());
        return s == s2;
    }

    void getAllParts(const string& s, vector<string>& partitions, vector<vector<string>>& ans) {
        if (s.empty()) {
            ans.push_back(partitions);
            return;
        }

        for (int i = 0; i < s.size(); i++) {
            string part = s.substr(0, i + 1);
            if (is_palin(part)) {
                partitions.push_back(part);
                getAllParts(s.substr(i + 1), partitions, ans);
                partitions.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<string> partitions;
        vector<vector<string>> ans;
        getAllParts(s, partitions, ans);
        return ans;
    }
};

int main() {
    Solution sol;
    string s = "aab";
    vector<vector<string>> result = sol.partition(s);

    cout << "All palindrome partitions of the string \"" << s << "\":" << endl;
    for (const auto& partition : result) {
        cout << "[";
        for (int i = 0; i < partition.size(); ++i) {
            cout << partition[i];
            if (i != partition.size() - 1) cout << ", ";
        }
        cout << "]" << endl;
    }

    return 0;
}
