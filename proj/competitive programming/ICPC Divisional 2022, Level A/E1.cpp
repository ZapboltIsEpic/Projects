#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<pair<int, int>> pairs;
    
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        pairs.emplace_back(a, b);
    }
    
    // consider outliers like 1 7, 2 7 etc.
    pair<int, int> optimal_pair(pairs[0].first, pairs[0].second);
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (pairs[j-1].first <= i && pairs[j-1].second > optimal_pair.second) {
                optimal_pair = pair(pairs[j-1].first, pairs[j-1].second);
            }

            if (!(optimal_pair.first <= i && optimal_pair.second >= j)) {
                cout << "No " << i << " " << j;
                return 0;
            }
        }
    }

    cout << "Yes";

}

