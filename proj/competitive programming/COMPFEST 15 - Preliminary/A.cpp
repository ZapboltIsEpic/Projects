#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> vec;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        a = abs(a);
        vec.emplace_back(a);
    }

    sort(vec.begin(), vec.end());

    cout << vec[0];
}