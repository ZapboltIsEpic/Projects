#include <bits/stdc++.h>

using namespace std;

// int f(int number, map<int, int> hmap, vector<int> &vec) {
//     if (vec[number] != -1) {
//         return vec[number];
//     }
//     int result = max(hmap[number]*number + f(number - 2, hmap, vec), f(number - 1, hmap, vec));
//     vec[number] = result;
//     return result;
// }

int main() {
    map<long long, long long> hmap;
    int n;
    cin >> n;

    long long max_int = 0;
    for (long long i = 0; i < n; i++) {
        long long a;
        cin >> a;
        if (hmap.find(a) != hmap.end()) {
            hmap[a] += 1;
        }
        else {
            hmap[a] = 1;
        }

        if (a > max_int) {
            max_int = a;
        }
    }

    vector<long long> vec(max_int + 1, -1);
    vec[0] = 0;
    vec[1] = hmap[1];

    for (long long i = 2; i <= max_int; i++) {
        vec[i] = max(hmap[i]*i + vec[i-2], vec[i-1]);
    }

    // cout << f(max_int, hmap, vec);
    cout << vec[max_int];
}