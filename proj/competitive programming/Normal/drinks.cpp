#include <bits/stdc++.h>

using namespace std;

int main() {
    float n;
    cin >> n;

    float total = 0;
    for (int i = 0; i < n; i++) {
        double p;
        cin >> p;
        total += p;
    }

    cout << total / n << endl;
}