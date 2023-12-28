#include <bits/stdc++.h>

using namespace std;

struct Node {
    int number;
    Node *manager;
};

struct Node *newNode(int n) {
    Node *node = new Node;
    node->number = n;
    node->manager = NULL;
    return node;
}

int main() {
    int n;
    cin >> n;
    map<int, int> hmap;
    vector<Node*> vec;
    for (int i = 1; i <= n; i++) {
        Node *node = newNode(i);
        int p;
        cin >> p;
        if (p != -1) {
            hmap[i-1] = p;
        }
        vec.emplace_back(node);
    }

    for (auto &[key, value] : hmap) {
        vec[key]->manager = vec[value-1];
    }

    int maxHeight = 1;

    for (auto &node : vec) {
        int currHeight = 0;
        while (node != NULL) {
            node = node->manager;
            currHeight++;
        }
        maxHeight = max(currHeight, maxHeight);
    }

    cout << maxHeight;
}