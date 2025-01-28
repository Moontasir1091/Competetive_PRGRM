#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q; 
    cin >> n >> q;

    int Unread_notification = 0;             // Total unread notifications
    map<int, int> mp;           // Tracks unread notifications per user

    while (q--) {
        int x, t;
        cin >> x >> t;

        if (x == 1) {
            // Add a new notification for user t
            Unread_notification++;
            mp[t]++;
        } 
        else if (x == 2) {
            // Mark all notifications for user t as read
            if (mp[t] > 0) {
                Unread_notification -= mp[t];
                mp[t] = 0;
            }
        } 
        else if (x == 3) {
            // Mark all notifications as read
            Unread_notification = 0;
            mp.clear();
        }

        // Output the current count of unread notifications
        
        
        cout << Unread_notification << endl;
    }

    
}
