#include <bits/stdc++.h>

using namespace std;

// class Graph {
// public:
//     map<int, bool> visited;
//     map<int, list<int> > adj;
 
//     void addEdge(int v, int w);
 
//     int DFS(int v, int s);
// };

// void Graph::addEdge(int v, int w) {
//     adj[v].push_back(w);
// }
 
// int Graph::DFS(int v, int s) {
//     int value = 0;
//     if (v == s) {
//         value = 1001;
//     }
//     visited[v] = true;

//     list<int>::iterator i;
//     for (i = adj[v].begin(); i != adj[v].end(); ++i) {
//         if (!visited[*i]) {
//             value += DFS(*i, s);
//         }
//     }
//     return value;
// }

// int main() {
//     Graph g;
//     int n, s;
//     cin >> n >> s;

//     vector<int> vec;
//     for (int i = 1; i <= n; i++) {
//         int a;
//         cin >> a;
//         if (a == 1) {
//             for (auto &tmp: vec) {
//                 g.addEdge(tmp, i);
//             }
//         }
//         vec.emplace_back(i);
//     }

//     for (int i = 5; i > 0; i--) {
//         int b;
//         cin >> b;
//         if (b == 1) {
//             for (auto &tmp: vec) {
//                 if (i > tmp) {
//                     g.addEdge(i, tmp);
//                 }
//             }
//         }
//     }

//     if (g.DFS(1, s) > 1000) {
//         cout << "YES";
//     }
//     else {
//         cout << "NO";
//     }

// }

int main() {
    int n, s;
    cin >> n >> s;

    vector<int> vec;
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        if (i == 1 && a == 0) {
            cout << "NO";
            return 0;
        }
        else if (i == s && a == 1) {
            cout << "YES";
            return 0;
        }
        else if (i > s && a == 1) {
            vec.emplace_back(i);
        }
    }

    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        if (i == s && a == 0) {
            cout << "NO";
            return 0;
        }
        else if (i > s && a == 1) {
            if (find(vec.begin(), vec.end(), i) != vec.end()) {
                cout << "YES";
                return 0;
            }
        }
    }

    cout << "NO";
}