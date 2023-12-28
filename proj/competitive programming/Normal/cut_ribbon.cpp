#include <bits/stdc++.h> 

using namespace std;

int f(int n, int a, int b, int c, map<int, int> &hmap) {
    if (n == 0) {
        return 0;
    }
    else if (n < 0) {
        return -4000;
    }

    if (hmap.find(n) != hmap.end()) {
        return hmap[n];
    }

    int first = f(n - a, a, b, c, hmap);
    int second = f(n - b, a, b, c, hmap);
    int third = f(n - c, a, b, c, hmap);

    hmap[n-a] = first;
    hmap[n-b] = second;
    hmap[n-c] = third;

    return 1 + max(first, max(second, third));
}

int main() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    map<int, int> hmap;
    cout << f(n, a, b, c, hmap);
}