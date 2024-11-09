#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int x, y, k;
        cin >> x >> y >> k;

        int xJumps;
        int yJumps;
        if (x % k != 0) {
            xJumps = x / k + 1;
        }
        else {
            xJumps = x/k;
        }

        if (y % k != 0) {
            yJumps = y / k + 1;
        }
        else {
            yJumps = y/k;
        }

        if (xJumps <= yJumps) {
            cout << yJumps*2 << endl;
        }
        else {
            cout << xJumps*2 - 1 << endl;
        }
    }
}