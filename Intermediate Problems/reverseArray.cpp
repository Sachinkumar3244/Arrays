#include <iostream>
#include <climits>
using namespace std;

int reverseInteger(int x) {

    int ans = 0;

    while (x != 0) {

        int digit = x % 10;
        x = x / 10;

        // Positive overflow
        if (ans > INT_MAX / 10 ||
            (ans == INT_MAX / 10 && digit > 7)) {
            return 0;
        }

        // Negative overflow
        if (ans < INT_MIN / 10 ||
            (ans == INT_MIN / 10 && digit < -8)) {
            return 0;
        }

        ans = ans * 10 + digit;
    }

    return ans;
}

int main() {

    int x = 123;

    cout << reverseInteger(x);

    return 0;
}