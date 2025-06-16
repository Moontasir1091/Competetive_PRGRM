// Author: Md Montashirul Islam
// Dept of CSE
// International Islamic University Chittagong


#include<bits/stdc++.h>
using namespace std;

//  Fast I/O
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

//  Typedefs & Macros
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vll vector<ll>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl '\n'

//  Loops
#define forn(i,n) for(int i=0;i<(n);++i)
#define rfor(i,n) for(int i=(n)-1;i>=0;--i)
#define forr(i,a,b) for(int i=(a);i<=(b);++i)

//  Constants
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const int MAXN = 2e5 + 5; // for precomputation

//  Directions for grid problems
int dx4[] = {0, 0, 1, -1};
int dy4[] = {1, -1, 0, 0};
int dx8[] = {0, 0, 1, -1, 1, -1, 1, -1};
int dy8[] = {1, -1, 0, 0, 1, -1, -1, 1};

//  Debugging Tool (works only locally)
#ifndef ONLINE_JUDGE
    #define debug(x) cerr << #x << " = "; _print(x); cerr << endl;
#else
    #define debug(x)
#endif

void _print(int x){cerr << x;}
void _print(ll x){cerr << x;}
void _print(string x){cerr << x;}
void _print(char x){cerr << x;}
void _print(bool x){cerr << (x ? "true" : "false");}
template<class T> void _print(vector<T> v){cerr << "[ "; for(T i : v) {_print(i); cerr << " ";} cerr << "]";}

//  Basic Math Utils
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
ll binpow(ll a, ll b, ll m = MOD) {
    a %= m;
    ll res = 1;
    while(b){
        if(b & 1) res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
ll modinv(ll a, ll m = MOD) {
    return binpow(a, m - 2, m);
}
ll intSqrt(ll x) {
    ll low = 1, high = x, ans = 1;
    while (low <= high) {
        ll mid = (low + high) / 2;
        if (mid * mid <= x) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}
/*vector<int> v;
v.push_back(x);         // Insert at end
sort(v.begin(), v.end()); // Sort ascending
reverse(v.begin(), v.end()); // Reverse

set<int> s;
s.insert(x);            // O(log n)
s.count(x);             // 0 or 1 (exists?)

map<char, int> m;
m[c]++;                 // Frequency of character

priority_queue<int> pq; // Max heap
pq.push(x); pq.top(); pq.pop();

stack<int> st;          // LIFO
queue<int> q;           // FIFO

lower_bound(v.begin(), v.end(), x); // ≥ x
upper_bound(v.begin(), v.end(), x); // > x
*/


// Precomputation: Factorials and Inverse Factorials
ll fact[MAXN], invFact[MAXN];
void precompute_factorials() {
    fact[0] = invFact[0] = 1;
    for (int i = 1; i < MAXN; i++) {
        fact[i] = fact[i-1] * i % MOD;
        invFact[i] = modinv(fact[i]);
    }
}
ll nCr(int n, int r) {
    if (r > n || r < 0) return 0;
    return fact[n] * invFact[r] % MOD * invFact[n - r] % MOD;
}

// ➕ Prefix Sum
vi prefix_sum(const vi &a) {
    int n = a.size();
    vi pre(n + 1, 0);
    for (int i = 0; i < n; ++i)
        pre[i+1] = pre[i] + a[i];
    return pre;
}



//  Problem Solve Function
void solve() {
   int n; cin >> n;
    vi a(n);
    forn(i,n){
        cin >> a[i];
    }
    map<ll, ll> freq;
    forn(i,n){
        ll b = a[i] - i;
        freq[b]++;
    }
    ll res = 0;
    for(auto &it : freq){
        ll cnt = it.second;
        if(cnt > 1){
            res += (cnt * (cnt - 1)) / 2; // nC2 = n * (n-1) / 2
        }
    }
    cout << res << endl;
}
    

//  Main
int main() {
    fastio();

    //  Precomputation
    precompute_factorials();

    int t = 1;
     cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
