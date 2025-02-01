#include <bits/stdc++.h>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N; // ইনপুট নেওয়া ঠিকভাবে
    
    priority_queue<int> pq; // ম্যাক্স হীপ (Descending order)
    while(M--){
        int x; cin >> x;
        pq.push(x);
    }

    long long Total_income = 0;
    while(N--){
        int max_seat = pq.top();
        Total_income += max_seat;
        pq.pop();
        max_seat--;
        pq.push(max_seat);

    }
    cout << Total_income << endl;

   
    return 0;
}
