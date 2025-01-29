/// Normal App
  
 // 0 1 1 2 3 5 8 ......
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

int DP[N];

int fibo(int n){
    if(n==0)return 0;
    if(n==1)return 1;

    if(DP[n] != -1) return DP[n]; // memoisation;

    return DP[n] = fibo(n-1) + fibo(n-2);
}

int main(){
    memset(DP, -1 , sizeof(DP));

    int n; cin >> n;

    cout << fibo(n) << endl;

}