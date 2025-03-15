// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         queue<int>q;
//        int n; cin >> n; vector<int>v(n);
//        for(int i = 0; i < n; ++i){
//         cin >> v[i];
       

//        }
//        sort(v.begin(), v.end());

//        for(int i = 0; i<n; ++i){
//          q.push(v[i]);

//        }
//        while(q.size()!=1){
//         int sum =  q.front();
//         q.pop();
//         sum = sum + q.front();
//         q.pop();
//         q.push(sum-1);
//        }

//        cout << q.front() << endl;

    

//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        priority_queue<int, vector<int>, greater<int>> pq; // Min-Heap

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            pq.push(x);
        }

        while (pq.size() > 1) {
            int sum = pq.top();
            pq.pop();
            sum += pq.top();
            pq.pop();
            pq.push(sum-1);
        }

        cout << pq.top() << endl;
    }
}
