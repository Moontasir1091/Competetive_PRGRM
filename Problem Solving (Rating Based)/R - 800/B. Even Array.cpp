#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
    int odd_in_even_idx = 0;
    
    int even_in_odd_idx = 0, odd_in_odd_idx = 0;

    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
for(int i = 0; i < n; i = i+2){
    if(a[i]%2 != 0){
        odd_in_even_idx++;
    }
}
    for(int i = 1; i < n; i = i+2){
        if(a[i]%2 == 0){
            even_in_odd_idx++;
        }
    }
    if(odd_in_even_idx == even_in_odd_idx){
        cout << odd_in_even_idx << endl;
    }
    else{
        cout << -1 << endl;
    }

    }
    
}