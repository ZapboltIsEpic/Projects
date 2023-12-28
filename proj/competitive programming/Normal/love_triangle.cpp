#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    int data;
    Node *next;
    Node(int d) {
        data = d;
        next = NULL;
    }
};

int main() {
    int n; 
    cin >> n;

    map<Node*, int> hmap;
    vector<Node*> vec;
    for (int i = 1; i <= n; i++) {
        int f;
        cin >> f;
        Node* newNode = new Node(i);
        vec.emplace_back(newNode);
        hmap[newNode] = f; 
    }

    for (auto &[key, value] : hmap) {
        key->next = vec[value-1];
    }

    for (auto curr : vec) {
        Node *head = curr;
        int length = 0;
        while (curr != NULL) {
            // cout << curr->data << "->";
            curr = curr->next;
            length++;
            if (curr->data == head->data) {
                if (length != 3) {
                    break;
                }
                cout << "YES";
                return 0;
            }

            if (length > 2) {
                    break;
            }
        }
        // cout << endl;
    }

    cout << "NO";
}