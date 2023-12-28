#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<int, int> hmap = {{1, 0}, {2, 0}, {3, 0}};

    int total = 0;
    for (int i = 0; i < n; i++) {
        int s;
        cin >> s;

        if (s == 4) {
            total++;
        }
        else {
            if (hmap[4-s] > 0) {
                hmap[4-s]--;
                total++;
            }
            else {
                hmap[s]++;
            }
        }
    }

    if (hmap[1] > 0) {
        if (hmap[2] == 1) {
            hmap[2]--;
            hmap[1] -= 2;
            total++;
        }

        if (hmap[1] > 0) {
            total += ceil(float(hmap[1])/4);
        }
        hmap[1] = 0;
    }

    for (auto &[key, value] : hmap) {
        if (value > 0) {
            total += value;
        }
    }

    cout << total;
}