// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int a,b,c; cin >> a >> b >> c;
// if((a*b==c)||(a*c==b)||(c*b==a))cout << "Yes" << endl;
// else{
//     cout << "No" << endl;
// }


// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {


//     int n, m;
//     cin >> n >> m;
    
//     unordered_set<int> ele;
//     for (int i = 0; i < m; ++i) {
//         int x;
//         cin >> x;
//         ele.insert(x); 
//     }

//     vector<int> v1;
//     for (int i = 1; i <= n; ++i) {
//         if (ele.find(i) == ele.end()) { 
           
//             v1.push_back(i);
//         }
//     }

//     cout << v1.size() << endl; 
//     for (int val : v1) {
//         cout << val << " ";
//     }
//     cout << endl;

   
// }

// https://atcoder.jp/contests/abc392/tasks/abc392_c

// Seems to be interesting to me;

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> Q(N+1), P(N+1), bib_num(N+1);
    for (int i = 1; i <= N; i++) cin >> P[i];
    for (int i = 1; i <= N; i++) cin >> Q[i]; 
    

    
    for (int i = 1; i <= N; i++) {
        bib_num[Q[i]] = i;
    }

   
    for (int i = 1; i <= N; i++) {
        cout << Q[P[bib_num[i]]] << " ";
    }
    cout << endl;

    return 0;
}
