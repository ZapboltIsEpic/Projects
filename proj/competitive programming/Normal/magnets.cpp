#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int prev = -1;
    int total = 1;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (prev == -1) {
            prev = int(s[0]);
        }
        else {
            if (prev != int(s[0])) {
                total++;
            }
            prev = int(s[0]);
        }
    }

    cout << total;
}