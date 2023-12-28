#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> vec;

    int N, L, R;
    cin >> N >> L >> R;

    for (int i = 0; i < N; i++) {
        int h;
        cin >> h;
        vec.emplace_back(h);
    }

    int maxElement = *min_element(vec.begin(), vec.end()) - L;
    int minElement = *max_element(vec.begin(), vec.end()) - R;

    cout << max(0, maxElement - max(0, minElement) + 1) << endl;
    for (int i = max(0, minElement); i <= maxElement; i++) {
        cout << i << endl;
    }
}