#include<bits/stdc++.h>
using namespace std;


int n,x;
vector<int> a;


bool good(long long h){

    long long p = 2;
    long long water = 0;
    for(int i =0;i<n;++i){
        if(a[i] < h){
            water += h - a[i];
        }

    }
    return water <= x;
}

int  main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> x;
    a.resize(n);
    a.clear();
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    long long  lo = 0, hi = 2e9;
    while(hi > lo){
        long long mid = (lo + hi + 1) / 2; // ceiling mid
        if(good(mid)){
            lo = mid;
        }else{
            hi = mid - 1;
        }
    }
    cout << lo << endl;

    }
    
    return 0;

}