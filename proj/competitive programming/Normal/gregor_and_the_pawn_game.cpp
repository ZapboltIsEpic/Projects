#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        string s0, s1;
        cin >> s0;
        cin >> s1;
        int total = 0;
        for (int j = 0; j < n; j++) {
            if (s1[j] == '1') {
                if (s0[j] == '0') {
                    total++;
                }
                else if (j > 0 && j < n - 1) {
                    if (s0[j-1] == '1') {
                        s0[j-1] = '2';
                        total++;
                    }
                    else if (j < n - 1 && s0[j+1] == '1') {
                        s0[j+1] = '2';
                        total++;
                    }
                }
                else if (j > 0 && s0[j-1] == '1') {
                    s0[j-1] = '2';
                    total++;
                }
                else if (j < n - 1 && s0[j+1] == '1') {
                    s0[j+1] = '2';
                    total++;
                }
            }
        }
        cout << total << endl;
    }
}