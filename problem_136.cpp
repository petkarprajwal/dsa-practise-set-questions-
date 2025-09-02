#include<iostream>
#include<vector>

using namespace std;

// Function to find one single number
int singleNumber(vector<int>& nums) {
    int ans = 0;
    for (int num : nums) {
        ans ^= num; // XOR operation
    }
    return ans;
}

/*Function to find two single numbers
int singleNumberTwo(vector<int>& nums, int& first, int& second) {
    // Step 1: XOR all numbers to get XOR of the two unique numbers
    int xorAll = 0;
    for (int num : nums) {
        xorAll ^= num;
    }
    
    // Step 2: Find the rightmost set bit in xorAll
    int rightmostSetBit = xorAll & (-xorAll);
    
    // Step 3: Divide numbers into two groups based on the rightmost set bit
    int group1 = 0, group2 = 0;
    for (int num : nums) {
        if (num & rightmostSetBit) {
            group1 ^= num; // Numbers with the bit set
        } else {
            group2 ^= num; // Numbers with the bit not set
        }
    }
    
    first = group1;
    second = group2;
    return 1; // Success indicator
}*/
int main() {
   /* // Test case 1: Find one single number
    vector<int> nums1 = {4, 1, 2, 1, 2};
    int res1 = singleNumber(nums1);
    cout << "The single number is: " << res1 << endl;
    
    // Test case 2: Find two single numbers
    vector<int> nums2 = {1, 2, 1, 3, 2, 5}; // 3 and 5 appear once, others twice
    int first, second;
    int result = singleNumberTwo(nums2, first, second);
    cout << "The two single numbers are: " << first << " and " << second << endl;
    */
    return 0;
}