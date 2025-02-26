#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
        int n;
    cin >> n;
    
    vector<long long> v;
    for (int i = 1; i <= n; ++i) {
        v.push_back(i);
    }

    vector<long long> vec(n); // সাইজ নির্ধারণ করা হয়েছে
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }

    vector<long long> arr;

    for (int i = 0; i < n; ++i) {
        while (vec[i] > 0) { 
            // যদি vec[i] v-তে থাকে এবং arr-এ না থাকে
            if (find(v.begin(), v.end(), vec[i]) != v.end() && 
                find(arr.begin(), arr.end(), vec[i]) == arr.end()) {
                
                arr.push_back(vec[i]); 
                break;
            } 
            else {
                vec[i] = floor(vec[i] / 2.0);
            }
        }
    }

  
    // cout << "Final arr: ";
    // for (long long x : arr) {
    //     cout << x << " ";
    // }

    if(arr.size()==n){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    //cout << endl;

    

    }
    
}
