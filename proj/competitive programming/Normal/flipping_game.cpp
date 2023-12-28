#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a, sum = 0, maxSum = -2, count = 0;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a == 0) {
            sum++;
        }
        else {
            sum--;
            count++;
        }

        maxSum = max(sum, maxSum);
        if (sum < 0) {
            sum = 0;
        }
    }

    cout << maxSum + count;
}