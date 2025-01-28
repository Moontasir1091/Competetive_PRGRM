#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    int Unread_notification = 0;                     // Total unread notifications
    queue<pair<int, int>> Q;                         // Global notification bar
    vector<queue<int>> e(n + 1);                     // App-specific queues
   

    vector<bool> mark(300001, false);                // To mark notifications as read

    int currentIndex = 0;                            // Tracks indices for notifications

    while (q--) {
        int x, t;
        cin >> x >> t;

        if (x == 1) {
            // Add a new notification
            Unread_notification++;
            currentIndex++;
            Q.push({currentIndex, t});
            e[t].push(currentIndex);
        } 
        else if (x == 2) {
            // Mark all notifications for app `t` as read
            while (!e[t].empty()) {
                int idx = e[t].front();
                e[t].pop();
                if (!mark[idx]) {
                    mark[idx] = true;
                    Unread_notification--;
                }
            }
        } 
        else if (x == 3) {
            // Mark all notifications up to index `t` as read
            while (!Q.empty() && Q.front().first <= t) {
                int idx = Q.front().first;
                int app = Q.front().second;
                Q.pop();
                if (!mark[idx]) {
                    mark[idx] = true;
                    e[app].pop();
                    Unread_notification--;
                }
            }
        }

        // Output the current count of unread notifications
        cout << Unread_notification << endl;
    }

    return 0;
}

/// Ata aro clear korte hobe


