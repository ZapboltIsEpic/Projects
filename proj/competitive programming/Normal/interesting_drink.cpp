#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> vec;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        vec.emplace_back(x);
    }

    sort(vec.begin(), vec.end());
    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {
        int m;
        cin >> m;

        if (m < vec[0]) {
            cout << 0 << endl;
            continue;
        }
        else if (m >= vec[n-1]) {
            cout << n << endl;
            continue;
        }

        int count = n / 2;
        int j = count;
        while (!(vec[j+1] > m && vec[j] <= m)) {
            count /= 2;
            if (count == 0) {
                count = 1;
            }
            if (vec[j] > m) {
                j -= count;
            }
            else {
                j += count;
            }
        }
        cout << j + 1 << endl;
    }
}

