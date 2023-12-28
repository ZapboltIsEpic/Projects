#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    char prev = s[0];
    int total = 0;
    for (int i = 0; i < s.size(); i++) {
        if (prev != s[i]) {
            total = 1;
        }
        else {
            total++;
        }

        if (total == 7) {
            cout << "YES";
            return 0;
        }

        prev = s[i];
    }

    cout << "NO";
}