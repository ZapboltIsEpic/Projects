#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> odd;
    vector<int> even;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (num % 2 == 0) {
            if (odd.size() > 1) {
                cout << i + 1;
                return 0;
            }
            even.emplace_back(i+1);
        }
        else {
            if (even.size() > 1) {
                cout << i + 1;
                return 0;
            }
            odd.emplace_back(i+1);
        }
    }

    if (odd.size() > 1) {
        cout << even[even.size()-1];
    }
    else {
        cout << odd[odd.size()-1];
    }
}