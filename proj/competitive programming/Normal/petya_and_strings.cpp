#include <bits/stdc++.h>

using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    std::transform(s1.begin(), s1.end(), s1.begin(),
    [](unsigned char c){ return std::tolower(c); });
    std::transform(s2.begin(), s2.end(), s2.begin(),
    [](unsigned char c){ return std::tolower(c); });
    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] < s2[i]) {
            cout << -1;
            break;
        }
        else if (s1[i] > s2[i]) {
            cout << 1;
            break;
        }
    }

    if (s1 == s2) {
        cout << 0;
    }
}