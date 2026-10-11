#include<iostream>
#include<vector>
using namespace std;
    vector<int> majorityElement(vector<int>& nums) {

        int candidate1 = 0;
        int candidate2 = 0;

        int count1 = 0;
        int count2 = 0;

        // Find two possible candidates
        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] == candidate1) {
                count1++;
            }
            else if (nums[i] == candidate2) {
                count2++;
            }
            else if (count1 == 0) {
                candidate1 = nums[i];
                count1 = 1;
            }
            else if (count2 == 0) {
                candidate2 = nums[i];
                count2 = 1;
            }
            else {
                count1--;
                count2--;
            }
        }

        // Verify candidates
        count1 = 0;
        count2 = 0;

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] == candidate1)
                count1++;

            if (nums[i] == candidate2)
                count2++;
        }

        vector<int> ans;

        if (count1 > nums.size() / 3)
            ans.push_back(candidate1);

        if (count2 > nums.size() / 3)
            ans.push_back(candidate2);

        return ans;
    }

int main() {

    vector<int> nums = {2, 3, 2};

    vector<int> ans = majorityElement(nums);

    // cout << "[";

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i];

        if (i < ans.size() - 1)
            cout << ",";
    }

    // cout << "]";

    return 0;
}