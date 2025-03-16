#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , k; cin >> n >> k;
    vector<int>v(n);
    for(int i = 0; i < n ; ++i){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
int cnt = 0;
    for(int i = 0; i < n-2 ;i = i+ 3){
        int can_play1 = 5 - v[i];
        int can_play2 = 5 - v[i+1];
        int can_play3 = 5 - v[i+2];
        if(can_play1 >= k && can_play2 >= k && can_play3 >= k){
            cnt++;
        }
    }
    cout << cnt << endl;
}