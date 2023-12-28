#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    int K;
    cin >> N >> K;

    int minimal = INT_MAX;
    // for (int i = 0; i < N; i++) {
    //     int c;
    //     cin >> c;
    //     int modulator = 0;
    //     for (int i = 1; i < c; i *= 10) {
    //         modulator = i;
    //     }
    //     modulator /= 10;
    //     for (int i = 10; i <= modulator; i *= 10) {
    //         int temp = c % modulator;
    //         minimal = min(abs(temp - K), temp + 10 - K);
    //         if (minimal == 0) {
    //             cout << 0;
    //             return 0;
    //         }
    //     }
    // }

    string s0 = to_string(K);
    for (int i = 0; i < N; i++) {
        int c;
        cin >> c;

        for (int j = 0; j <= 9; j++) {
            int lower = c - j; 
            int upper = c + j;

            string s1 = to_string(lower);
            string s2 = to_string(upper);

            if (s1.find(s0) != string::npos || s2.find(s0) != string::npos) {
                minimal = min(minimal, j);
            }

            if (minimal == 0) {
                cout << 0;
                return 0;
            }
        }
    }
    cout << minimal;
}