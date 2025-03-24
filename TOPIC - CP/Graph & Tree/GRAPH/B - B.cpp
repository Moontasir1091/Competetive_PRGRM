#include <bits/stdc++.h>
using namespace std;

const int MAX = 20;  // সর্বোচ্চ গ্রিডের সাইজ
char arr[MAX][MAX];
bool visited[MAX][MAX];
int r, c, cnt;

// DFS ফাংশন
void dfs(int i, int j) {
    if (i < 0 || j < 0 || i >= r || j >= c) return;  // সীমার বাইরে গেলে ফেরা

    if (arr[i][j] == '#' || visited[i][j]==true) return;   // জল বা ইতিমধ্যে ভিজিট করা হলে ফেরা

    visited[i][j] = true;  // বর্তমান কোষ ভিজিট করা হয়েছে চিহ্নিত করা
    cnt++;  // ভূমির সংখ্যা বাড়ানো

    // চারদিকে মুভ করা
    dfs(i - 1, j);
    dfs(i + 1, j);
    dfs(i, j - 1);
    dfs(i, j + 1);
}

int main() {
    int t;
    cin >> t;
    
    for (int tc = 1; tc <= t; tc++) {
        cin >> c >> r;  // গ্রিডের সাইজ ইনপুট নেওয়া
        
        int start_x, start_y;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> arr[i][j];
                if (arr[i][j] == '@') {
                    start_x = i;
                    start_y = j;
                }
                visited[i][j] = false;  // প্রতিটি কোষ আনভিজিটেড করা
            }
        }

        cnt = 0;  
        dfs(start_x, start_y);  // DFS চালানো

        cout << "Case " << tc << ": " << cnt << endl;  
    }
    
    return 0;
}
