#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    priority_queue<int> pq; // max-heap

    while (n--) {
        int type;
        cin >> type;

        if (type == 1) {
            long long x;
            cin >> x;
            pq.push(x);
        } 
        else if (type == 2) {
           
                pq.pop(); // only pop if the queue is not empty
           
        } 
        else if (type == 3) {
            if (!pq.empty()) {
                cout << pq.top() << endl; // print the top element (max element)
            }
        }
    }

    return 0;
}
