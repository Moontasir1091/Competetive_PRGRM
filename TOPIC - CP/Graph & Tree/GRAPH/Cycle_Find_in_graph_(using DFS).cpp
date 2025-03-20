// How to Find Connected Components In GRAPH using DFS.

#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
vector<int> graph[N];
int visited[N];

bool dfs(int vertex, int par)
{

    visited[vertex] = 1;
    bool is_loop_Exist = false;
    for (int child : graph[vertex])
    {
        if (visited[child] && child == par)
            continue;
        if (visited[child])
            return true; /// Loop exist kore

        // if (visited[child])
        //     continue; // ✅ child চেক করা হচ্ছে

        is_loop_Exist |= dfs(child, vertex);
    }
    return is_loop_Exist;
}

int main()
{ // ✅ "mian" → "main"
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; ++i)
    {
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    memset(visited, 0, sizeof(visited));
    int cnt = 0;
    bool is_loop_Exist = false;
    for (int i = 1; i <= n; ++i)
    {
        if (visited[i])
            continue;
        if (dfs(i, 0))
        {
            is_loop_Exist = true;
            break;
        }
    }
    cout << is_loop_Exist << endl;
}

/*


input
8 5
1 2
2 3
2 4
3 5
6 7
*/