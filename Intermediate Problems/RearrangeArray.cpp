#include <iostream>
#include <vector>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {

    vector<int> ans(nums.size());

    int pos = 0;
    int neg = 1;

    for (int i = 0; i < nums.size(); i++) {

        if (nums[i] > 0) {
            ans[pos] = nums[i];
            pos += 2;
        }
        else {
            ans[neg] = nums[i];
            neg += 2;
        }
    }

    return ans;
}

int main() {

    vector<int> nums = {3, 1, -2, -5, 2, -4};

    vector<int> ans = rearrangeArray(nums);

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}