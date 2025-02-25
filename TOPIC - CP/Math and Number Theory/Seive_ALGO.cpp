#include<bits/stdc++.h>
using namespace std;

const int N = 1e7 + 10;
vector<bool> is_Prime(N, 1);

int main(){
    is_Prime[0] = is_Prime[1] = false;
    for(int i=2 ; i<N ; ++i){
        if(is_Prime[i] == true){
            for(int j = 2*i ;j<N ; j+=i){ // Here let i = 2; then j = 4, 6, 8, 10, 12....etc all multiple of i
                is_Prime[j] = false;
            }
        }
    }

    int q; cin >> q;
    while(q--){
        int n; cin >> n;
        if(is_Prime[n]){
            cout << "PRIME NUMBER" << '\n';
        }
        else{
            cout << "NOT PRIME" << '\n';
        }
    }

}