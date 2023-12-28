#include <bits/stdc++.h>

using namespace std;

int main() {
    string s, t;
    cin >> s;
    cin >> t;

    if (s.length() != t.length()) {
        cout << "NO";
        return 0;
    }

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != t[s.length()-1-i]) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

}