#include <bits/stdc++.h>

using namespace std;

const int MOD = 998244353;

long long power_mod(long long base, long long exponent, int mod) {
    long long result = 1;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exponent /= 2;
    }
    return result;
}

// ...

int main() {
    int N;
    cin >> N;

    vector<int> vec;
    map<int,int> Xs;
    for (int i = 0; i < N; i++) {
        int A;
        cin >> A;

        vec.emplace_back(A);
    }

    for (int i = 0; i < N; i++) {
        int B;
        cin >> B;

        Xs[vec[i]] = B;
    }

    int M;
    cin >> M;

    vec.clear();
    map<int,int> Ys;
    for (int i = 0; i < M; i++) {
        int C;
        cin >> C;

        vec.emplace_back(C);
    }

    for (int i = 0; i < M; i++) {
        int D;
        cin >> D;

        Ys[vec[i]] = D;
    }

    for (auto const &[key, val] : Ys) {
        if (Xs.find(key) == Xs.end()) {
            cout << 0;
            return 0;
        }
        else {
            Xs[key] = Xs[key] - Ys[key];
            if (Xs[key] < 0) {
                cout << 0;
                return 0;
            }
        }
    }

    long long total = 0;
    for (auto const &[key, val] : Xs) {
        if (val >= 1) {
            total += 1;
        }
    }

    long long final = power_mod(2, total, MOD);
    cout << final;
}