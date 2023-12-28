#include <bits/stdc++.h>

using namespace std;

struct node  { 
    char data; 
    struct node *left; 
    struct node *right; 
}; 

struct node* newNode(char data) {
    // Allocate memory for new node
    struct node* node = (struct node*)malloc(sizeof(struct node));
 
    // Assign data to this node
    node->data = data;
 
    // Initialize left and
    // right children as NULL
    node->left = NULL;
    node->right = NULL;
    return (node);
}

void constructTree(node *n, int N) {
    if (N == 0) {
        return;
    }

    if (n->data == 'R') {
        n->left = newNode('R');
        n->right = newNode('S');
    }
    else if (n->data == 'P') {
        n->left = newNode('P');
        n->right = newNode('R');
    }
    else if (n->data == 'S') {
        n->left = newNode('P');
        n->right = newNode('S');
    }

    constructTree(n->left, N-1);
    constructTree(n->right, N-1);
}

void printTree(node *n, string &s) {
    if (n->left != NULL && n->right != NULL) {
        printTree(n->left, s);
        printTree(n->right, s);
    }
    else {
        s += n->data;
    }
}

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int N, R, P, S;
        cin >> N >> R >> P >> S;

        cout << "Case #" << i + 1 << ": ";
        char base;
        if (N == 1) {
            if (S == R && P == R - 1) {
                cout << "RS\n";
                continue;
            }
            else if (S == P && R == P - 1) {
                cout << "PS\n";
                continue;
            }
            else if (P == R && S == P - 1) {
                cout << "PR\n";
                continue;
            }
            else {
                cout << "IMPOSSIBLE\n";
                continue;
            }
        }
        else if (N % 3 == 0) {
            if (S == R && (P == R + 1 || P == R - 1)) {
                base = 'P';
            }
            else if (S == P && (R == P + 1 || R == P - 1)) {
                base = 'R';
            }
            else if (P == R && (S == P + 1 || S == P - 1)) {
                base = 'S';
            }
            else {
                cout << "IMPOSSIBLE\n";
                continue;
            }
        }
        else if (N % 3 == 1) {
            if (S == R && (P == R + 1 || P == R - 1)) {
                base = 'R';
            }
            else if (S == P && (R == P + 1 || R == P - 1)) {
                base = 'S';
            }
            else if (P == R && (S == P + 1 || S == P - 1)) {
                base = 'P';
            }
            else {
                cout << "IMPOSSIBLE\n";
                continue;
            }
        }
        else {
            if (S == R && (P == R + 1 || P == R - 1)) {
                base = 'S';
            }
            else if (S == P && (R == P + 1 || R == P - 1)) {
                base = 'P';
            }
            else if (P == R && (S == P + 1 || S == P - 1)) {
                base = 'R';
            }
            else {
                cout << "IMPOSSIBLE\n";
                continue;
            }
        }

        struct node* root = newNode(base);
        constructTree(root, N);
        string s = "";
        printTree(root, s);

        for (int k = 0; k < N; k++) {
            for (int j = 0; j < s.size(); j++) {
                int start = j;
                int chunk_size = pow(2, k);
                string chunk_one = s.substr(j, chunk_size);
                j += chunk_size;
                string chunk_two = s.substr(j, chunk_size);
                j += chunk_size - 1;
                if (chunk_two < chunk_one) {
                    s.replace(start, chunk_size, chunk_two);
                    s.replace(start + chunk_size, chunk_size, chunk_one);
                }
            }
        }

        cout << s + '\n';
    }
}