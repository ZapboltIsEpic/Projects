#include <bits/stdc++.h>

using namespace std;

int main() {
    long long N, M;
    cin >> N >> M;

    long long min = N - M;
    vector<long long> vec;
    for (int i = 0; i < N; i++) {
        long long L;
        cin >> L;
        min += L;
        vec.emplace_back(L);
    }

    long long total = min;
    if (min % M == 0) {
        min /= M;
    }
    else {
        min /= M;
        min++;
    }

    long long curr = 0;
    long long line = min;
    for (auto &val : vec) {
        curr += val;
        curr++;
        if (curr > min) {
            curr--;
            total -= curr;
            min = curr;
            line = max(curr, line);
            M--;
            if (M == 0) {
                break;
            }
            if (total % M == 0) {
                min = total / M;
            }
            else {
                min = (total / M) + 1;
            }
            curr = 0;
        }
    }

    cout << line;
}