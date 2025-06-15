#include <bits/stdc++.h>
using namespace std;

// Constants
const int N = 1e5 + 10;
const int INF = 1e9 + 10;

// Graph as adjacency list with edge weights (0 or 1)
vector<pair<int, int>> g[N];

// Level array to store shortest distance
vector<int> lev(N, INF);

int n, m;

// 0-1 BFS function
int bfs() {
    deque<int> q;
    q.push_back(1);    // Start BFS from node 1
    lev[1] = 0;        // Distance to itself is 0

    while (!q.empty()) {
        int cur_v = q.front();
        q.pop_front();

        for (auto child : g[cur_v]) {
            int child_v = child.first;
            int wt = child.second;

            // If a shorter path is found
            if (lev[cur_v] + wt < lev[child_v]) {
                lev[child_v] = lev[cur_v] + wt;

                // If weight is 1, add to back (normal BFS)
                // If weight is 0, add to front (high priority)
                if (wt == 1) {
                    q.push_back(child_v);
                } else {
                    q.push_front(child_v);
                }
            }
        }
    }

    // Return shortest distance to node n, or -1 if unreachable
    return lev[n] == INF ? -1 : lev[n];
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < m; ++i) {
        int x, y;
        cin >> x >> y;

        // Edge from x -> y with weight 0
        g[x].push_back({y, 0});

        // Edge from y -> x with weight 1
        g[y].push_back({x, 1});
    }

    cout << bfs() << endl;
}
