#include<iostream>
using namespace std;

int main() {
    int nums[] = {2, 2, 4};
    int res = 0;  // Initialize res
    int n = sizeof(nums) / sizeof(nums[0]);  // Correct way to get array length

    for(int i = 0; i < n; i++) {
        res = res ^ nums[i];  // XOR operation
    }
    
    cout << "result=" << res;
    return 0;
}