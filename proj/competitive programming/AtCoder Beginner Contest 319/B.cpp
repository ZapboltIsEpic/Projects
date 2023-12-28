#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> vec;
    for (int i = 1; i <= 9; i++) {
        if (n % i == 0) {
            vec.emplace_back(i);
        }
    }

    string s;
    for (int i = 0; i <= n; i++) {
        vector<int> vec2;
        for (auto &val : vec) {
            if (i % (n / val) == 0) {
                vec2.emplace_back(val);
            }
        }

        if (vec2.empty()) {
            s += '-';
        }
        else {
            s += to_string(vec2[0]);
        }
    }

    cout << s;
}