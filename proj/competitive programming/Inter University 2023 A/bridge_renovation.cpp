#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> vec;
    for (int i = 0; i < N; i++) {
        int L;
        cin >> L;
        vec.emplace_back(L);
    }

    if (N == 2) {
        cout << vec[0] + vec[1];
        return 0;
    }

    sort(vec.begin(), vec.end());
    


}