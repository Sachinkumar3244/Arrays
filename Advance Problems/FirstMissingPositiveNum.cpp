#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
    int firstMissingPositive(vector<int>& nums) {

        int n = nums.size();

        // Put each positive number at its correct index
        for (int i = 0; i < n; i++) {

            while (nums[i] >= 1 &&
                   nums[i] <= n &&
                   nums[nums[i] - 1] != nums[i]) {

                swap(nums[i], nums[nums[i] - 1]);
            }
        }

        // Find first missing positive
        for (int i = 0; i < n; i++) {

            if (nums[i] != i + 1) {
                return i + 1;
            }
        }

        return n + 1;
    }
  
    int main() {

    vector<int> nums = {3, 4, -1, 1};

    cout << firstMissingPositive(nums);

    return 0;
}