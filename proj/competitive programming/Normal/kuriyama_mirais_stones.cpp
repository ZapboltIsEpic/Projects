#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> vec1;
    vector<long long> vec2;
    for (int i = 0; i < n; i++) {
        long long v;
        cin >> v;
        vec1.emplace_back(v);
        vec2.emplace_back(v);
    }

    sort(vec2.begin(), vec2.end());
    map<pair<int, int>, long long> hmap1;
    map<pair<int, int>, long long> hmap2;

    hmap1[pair(0, -1)] = 0;
    hmap2[pair(0, -2)] = 0;

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            hmap1[pair(0, i)] = vec1[i];
            hmap2[pair(0, i)] = vec2[i];
        }
        else {
            hmap1[pair(0, i)] = hmap1[pair(0, i - 1)] + vec1[i];
            hmap2[pair(0, i)] = hmap2[pair(0, i - 1)] + vec2[i];
        }
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int type, l, r;
        cin >> type >> l >> r;

        if (type == 1) {
            cout << hmap1[pair(0, r-1)] - hmap1[pair(0, l-2)] << endl;
        }
        else if (type == 2) {
            cout << hmap2[pair(0, r-1)] - hmap2[pair(0, l-2)] << endl;
        }
    }
}