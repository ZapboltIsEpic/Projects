#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> vec(n, 0);

    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        vec[a-1] = i;
    }

    for (auto &val: vec) {
        cout << val;
        cout << " ";
    }
}