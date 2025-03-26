#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
        int n, k;
    cin >> n >> k;
    string str;
    cin >> str;
    
    map<char, int> freq;
    set<int>st;
    
  
    for (char ch : str) {
        freq[ch]++;
        
    }
    int have_to_change = 0;

    for(auto it: freq){
        if(it.second % 2 != 0)have_to_change++;
    }
    if(have_to_change > k+1){ // If we have have_to_change odd characters, the minimum number of changes needed is have_to_change - 1
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }

   
    }
    
    }

    // if(maxFreq % 2 == 0){

    // }
    
//     return 0;
// }
