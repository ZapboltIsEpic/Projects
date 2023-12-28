#include <bits/stdc++.h> 

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        map<int, int> hmap;
        for (int j = 0; j < n; j++) {
            int e;
            cin >> e;

            if (hmap.find(e) == hmap.end()) {
                hmap[e] = 0;
            }
            hmap[e] += 1;
        }

        int groups = 0;
        int remainder = 0;
        int total = n;
        for (auto &[key, value]: hmap) {
            if (total + remainder >= key) {
                groups += (value + remainder) / key;
                remainder = (value + remainder) % key;
                total -= value;
            }
            else {
                break;
            }
        }
        
        cout << groups << endl;
    }
}