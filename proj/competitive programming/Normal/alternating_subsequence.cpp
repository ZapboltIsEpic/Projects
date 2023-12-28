#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        long long total = 0;
        long long ptr = 0;
        for (int j = 0; j < n; j++) {
            long long a;
            cin >> a;
            if (ptr == 0) {
                ptr = a;
            }
            else if (ptr < 0 && a < 0) {
                if (a > ptr) {
                    ptr = a;
                }
            }
            else if (ptr > 0 && a > 0) {
                if (a > ptr) {
                    ptr = a;
                }
            }
            else {
                total += ptr;
                ptr = a;
            }
        }
        total += ptr;
        cout << total << endl;
    }
}