#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, number;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s.find("++", 0) != string::npos) {
            number++;
        }
        else if (s.find("--", 0) != string::npos) {
            number--;
        }
    }

    cout << number;
}