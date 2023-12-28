#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, l;

    cin >> n >> l;

    vector<double> vec;
    for (int i = 0; i < n; i++) {
        double a;
        cin >> a;
        vec.emplace_back(a);
    }

    sort(vec.begin(), vec.end());
    double prev = 0;
    double max_diff = 0;
    int i = 0;
    for (auto &val : vec) {
        double diff = val - prev;
        if (i == 0) {
            max_diff = diff;
        }
        else {
            max_diff = max(diff/2, max_diff);
        }
        prev = val;
        i++;
    }

    cout << fixed << max(l-prev, max_diff);
}