// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         vector<int> vec;
//         map<int, int> freq;

//         for(int i = 0; i < n; ++i){
//             cin >> a[i];
//             freq[a[i]]++;
//         }
//         for(auto& it : freq){
//            vec.push_back(it.second);
//         }

//         bool ok = true;

//         if(freq.size() > 2){
//             ok = false;
//         } else if(freq.size() == 2){
           
//                 if(abs(vec[0] - vec[1]) > 1){
//                     ok = false;
                    
//                 }
            
//         }
        

//         cout << (ok ? "YES" : "NO") << '\n';
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;





vector<int> computePrefix(string s) {
    int n = s.size();
    vector<int> pi(n);
    for (int i = 1; i < n; i++) {
        int j = pi[i - 1];
        while (j > 0 && s[i] != s[j]) {
            j = pi[j - 1];
        }
        if (s[i] == s[j]) {
            j++;
        }
        pi[i] = j;
    }
    return pi;
}

int main() {
   
    int t; cin >> t;
    int case_num = 1;
    while (t--) {
        string s; cin >> s;
        string rev_s = s;
        reverse(rev_s.begin(), rev_s.end());
        string combined = rev_s + "#" + s;

        vector<int> pi = computePrefix(combined);
        int matched = pi.back();
        int to_add = s.size() - matched;
        int result_length = s.size() + to_add;

        cout << "Case " << case_num++ << ": " << result_length << endl;
    }
    return 0;
}
