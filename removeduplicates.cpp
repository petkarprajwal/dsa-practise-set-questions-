#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 2, 5, 4, 3, 5, 4};
  
  	// Sort the vector
    sort(v.begin(), v.end());

    // Move all duplicates to last of vector
    auto it = unique(v.begin(), v.end());

    // Remove all duplicates
    v.erase(it, v.end());

    for (auto i : v)
        cout << i << " ";
    return 0;

    /*for (int i = 0; i < v.size(); i++) {

        // Compare each element with current one
        for (int j = i + 1; j < v.size();) {
          
          	// Erase if duplicate is found.
            if (v[j] == v[i])
                v.erase(v.begin() + j);
            else
                j++;
        }
    }*/
}