#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Recursive helper function to generate subsets
void subsetRecur(int index, vector<int>& arr, vector<vector<int>>& result, vector<int>& current) {
    // Base case: if we've processed all elements
    if (index == arr.size()) {
        result.push_back(current);
        return;
    }

    // Include current element
    current.push_back(arr[index]);
    subsetRecur(index + 1, arr, result, current);

    // Exclude current element (backtrack)
    current.pop_back();
    subsetRecur(index + 1, arr, result, current);
}

// Main function to return all subsets
vector<vector<int>> subsets(vector<int>& arr) {
    vector<vector<int>> result;
    vector<int> current;
    subsetRecur(0, arr, result, current);
    return result;
}

int main() {
    vector<int> arr = {1, 2, 3};

    // Generate all subsets
    vector<vector<int>> result = subsets(arr);

    // Optional: sort subsets lexicographically
    sort(result.begin(), result.end());

    // Print all subsets
    for (const auto& subset : result) {
        cout << "[";
        for (int i = 0; i < subset.size(); ++i) {
            cout << subset[i];
            if (i != subset.size() - 1) cout << ", ";
        }
        cout << "]" << endl;
    }

    return 0;
}
