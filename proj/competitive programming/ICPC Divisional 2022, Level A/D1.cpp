#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    long total = 1;
    for (int i = 0; i < n; i++) {
        long m, k;
        cin >> m >> k;
        long a = tgamma(m+1) / (tgamma(k+1) * tgamma(m - k));
        if (a * total > pow(10, 9) || a * total == 0) {
            cout << "BIG ENOUGH";
            return 0;
        }
        else {
            total *= a;
        }
    }

    cout << total;
}