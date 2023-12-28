#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int max_capacity = 0;
    int current = 0;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        current = current - a + b;
        max_capacity = max(current, max_capacity);
    }

    cout << max_capacity;
}