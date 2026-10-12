#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
    int maxValue(vector<int>& arr) {

        int max1 = arr[0] + 0;
        int min1 = arr[0] + 0;

        int max2 = arr[0] - 0;
        int min2 = arr[0] - 0;

        for (int i = 1; i < arr.size(); i++) {

            int val1 = arr[i] + i;
            int val2 = arr[i] - i;

            max1 = max(max1, val1);
            min1 = min(min1, val1);

            max2 = max(max2, val2);
            min2 = min(min2, val2);
        }

        return max(max1 - min1, max2 - min2);
    }
    int main() {

    vector<int> arr = {1, 2, 3, 1};

    cout << maxValue(arr);

    return 0;
}
