#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    vector<long long> vec;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        for (int j = 0; j < n; j++) {
            long long a;
            cin >> a;
            vec.emplace_back(a);
        }

        sort(vec.begin(), vec.end(), greater<long long>());

        long long alice = 0;
        long long bob = 0;
        for (int j = 0; j < vec.size(); j++) {
            if (j % 2 == 0) {
                if (vec[j] % 2 == 0) {
                    alice += vec[j];
                }
            }
            else {
                if (vec[j] % 2 == 1) {
                    bob += vec[j];
                }
            }
        }

        if (bob > alice) {
            cout << "Bob" << endl;
        }
        else if (alice > bob) {
            cout << "Alice" << endl;
        }
        else {
            cout << "Tie" << endl;
        }

        vec.clear();
    }
}