#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;
    if (n % a != 0) {
        n += a - (n % a);
    }

    if (m % a != 0) {
        m += a - (m % a);
    }

    cout << fixed << setprecision(0) << max(n/a, static_cast<long long>(1)) * max(m/a, static_cast<long long>(1));
}