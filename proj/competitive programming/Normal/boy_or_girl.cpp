#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    vector<int> chars;
    for (int i = 0; i < s.size(); i++) {
        if (find(chars.begin(), chars.end(), s[i]) == chars.end()) {
            chars.push_back(s[i]);
        }
    }

    if (chars.size() % 2 == 1) {
        cout << "IGNORE HIM!";
    }
    else {
        cout << "CHAT WITH HER!";
    }
}