#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> leaders(vector<int>& arr) {

    vector<int> ans;

    int maxRight = arr[arr.size() - 1];

    ans.push_back(maxRight);

    for (int i = arr.size() - 2; i >= 0; i--) {

        if (arr[i] >= maxRight) {
            ans.push_back(arr[i]);
            maxRight = arr[i];
        }
    }

    reverse(ans.begin(), ans.end());

    return ans;
}

int main() {

    vector<int> arr = {16, 17, 4, 3, 5, 2};

    vector<int> ans = leaders(arr);

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}