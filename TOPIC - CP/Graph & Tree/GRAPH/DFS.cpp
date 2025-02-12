#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
vector<int> graph[N];
int visited[N];

void dfs(int vertex, int par = -1) {
    cout << "Entering Vertex: " << vertex << " From Parent: " << par << endl;
    
    visited[vertex] = 1;
    for (int child : graph[vertex]) {
        cout << "parent: " << vertex << " -> child: " << child << endl;

        if (visited[child]) continue; // ✅ child চেক করা হচ্ছে

        dfs(child, vertex);
    }
    cout << "Exiting Vertex: " << vertex << endl;
}

int main() { // ✅ "mian" → "main"
    int n, m; 
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    memset(visited, 0, sizeof(visited));

    dfs(1);
}


/*
Input:
6 9
1 3
1 5
3 5
3 4 
3 6
3 2
2 6
4 6
5 6

OutPUT: 

Entering Vertex: 1 From Parent: -1
parent: 1 -> child: 3
Entering Vertex: 3 From Parent: 1
parent: 3 -> child: 1
parent: 3 -> child: 5
Entering Vertex: 5 From Parent: 3
parent: 5 -> child: 1
parent: 5 -> child: 3
parent: 5 -> child: 6
Entering Vertex: 6 From Parent: 5
parent: 6 -> child: 3
parent: 6 -> child: 2
Entering Vertex: 2 From Parent: 6
parent: 2 -> child: 3
parent: 2 -> child: 6
Exiting Vertex: 2
parent: 6 -> child: 4
Entering Vertex: 4 From Parent: 6
parent: 4 -> child: 3
parent: 4 -> child: 6
Exiting Vertex: 4
parent: 6 -> child: 5
Exiting Vertex: 6
Exiting Vertex: 5
parent: 3 -> child: 4
parent: 3 -> child: 6
parent: 3 -> child: 2
Exiting Vertex: 3
parent: 1 -> child: 5
Exiting Vertex: 1


*/