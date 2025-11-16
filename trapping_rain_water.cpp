#include<iostream>
#include<stack>
#include<vector>

using namespace std;
class Solution {
public:
int trapBruteForce(vector<int>& height) {
    int n = height.size();
    int totalWater = 0;

    for (int i = 0; i < n; i++) {
        int leftMax = 0, rightMax = 0;

        for (int j = 0; j <= i; j++) {
            leftMax = max(leftMax, height[j]);
        }

        for (int j = i; j < n; j++) {
            rightMax = max(rightMax, height[j]);
        }

        totalWater += min(leftMax, rightMax) - height[i];
    }

    return totalWater;
}
//better appraoch O(n) time and O(n) space
int trapBetter(vector<int>& height) {
    int n = height.size();
    if (n == 0) return 0;

    vector<int> leftMax(n), rightMax(n);
    leftMax[0] = height[0];
    rightMax[n - 1] = height[n - 1];

    for (int i = 1; i < n; i++) {
        leftMax[i] = max(leftMax[i - 1], height[i]);
    }

    for (int i = n - 2; i >= 0; i--) {
        rightMax[i] = max(rightMax[i + 1], height[i]);
    }

    int totalWater = 0;
    for (int i = 0; i < n; i++) {
        totalWater += min(leftMax[i], rightMax[i]) - height[i];
    }

    return totalWater;
}
//two pointer approach O(n) time and O(1) space
int trapOptimal(vector<int>& height) {  
    int n = height.size();
    int left = 0, right = n - 1;
    int leftMax = 0, rightMax = 0;
    int totalWater = 0;

    while (left <= right) {
        if (height[left] <= height[right]) {
            if (height[left] >= leftMax) {
                leftMax = height[left];
            } else {
                totalWater += leftMax - height[left];
            }
            left++;
        } else {
            if (height[right] >= rightMax) {
                rightMax = height[right];
            } else {
                totalWater += rightMax - height[right];
            }
            right--;
        }
    }

    return totalWater;
}
};
int main() {
    Solution sol;
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};

    cout << "Trapped Rain Water (Brute Force): " << sol.trapBruteForce(height) << endl;
    cout << "Trapped Rain Water (Better): " << sol.trapBetter(height) << endl;
    cout << "Trapped Rain Water (Optimal): " << sol.trapOptimal(height) << endl;

    return 0;
}
