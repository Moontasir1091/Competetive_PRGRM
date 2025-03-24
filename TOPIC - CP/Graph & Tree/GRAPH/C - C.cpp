#include <bits/stdc++.h>
using namespace std;

const int MAX = 200;
char arr[MAX][MAX];
bool visited[MAX][MAX];
int r, c;

// ৮টি দিক নির্ধারণ (উপর, নিচ, ডানে, বামে, এবং কোণ বরাবর)
int dx[] = {-1, 1, 0, 0, -1, -1, 1, 1};
int dy[] = {0, 0, -1, 1, -1, 1, -1, 1};

void dfs(int i, int j)
{
    if (i < 0 || j < 0 || i >= r || j >= c)
        return;
    if (arr[i][j] == '.' || visited[i][j])
        return;

    visited[i][j] = true;

    // ৮টি দিকেই DFS চালানো

    for (int k = 0; k < 8; k++)
    {
        int ni = i + dx[k];
        int nj = j + dy[k];
        dfs(ni, nj);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        cin >> r >> c;
        for (int i = 0; i < r; ++i)
        {
            for (int j = 0; j < c; ++j)
            {
                cin >> arr[i][j];
                visited[i][j] = false;
            }
        }
        int Island_cnt = 0;

        for (int i = 0; i < r; ++i)
        {
            for (int j = 0; j < c; ++j)
            {
                if (arr[i][j] == '#' && !visited[i][j])
                {
                    Island_cnt++;
                    dfs(i, j);
                }
            }
        }
        cout << Island_cnt << endl;
    }
}

// "Adjacent" লেখা থাকলে → ৪ দিক

// "Neighbouring" এবং "differ by at most 1" লেখা থাকলে → ৮ দিক