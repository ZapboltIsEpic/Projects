#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    string s;
    cin >> s;

    for (int i = 0; i < m; i++) {
        for (int j = 1; j < n; j++) {
            if (s[j] == 'G' && s[j-1] == 'B') {
                s[j] = 'B';
                s[j-1] = 'G';
                j++;
            }
        }
    }

    cout << s;

}