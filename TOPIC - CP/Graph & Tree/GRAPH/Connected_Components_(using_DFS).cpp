// How to Find Connected Components In GRAPH using DFS.

#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
vector<int> graph[N];
int visited[N];


void dfs(int vertex) {
  
    visited[vertex] = 1;
    for (int child : graph[vertex]) {
        

        if (visited[child]) continue; // ✅ child চেক করা হচ্ছে

        dfs(child);
    }
    
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
int cnt = 0;

for(int i=1;i<=n;++i){
    if(visited[i])continue;
    dfs(i);
    cnt++;
}
cout << cnt << endl;
    
}

/*
https://www.hackerearth.com/problem/algorithm/connected-components-in-a-graph/

input
8 5
1 2
2 3
2 4
3 5
6 7
*/