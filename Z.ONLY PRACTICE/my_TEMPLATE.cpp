#include <bits/stdc++.h>
using namespace std;

// Fast Input/Output
#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

// Shortcuts
#define ll long long
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define sz(x) (int)(x).size()
#define for_M(i,a,b) for(int i = a; i < b; i++)
#define r_for(i,a,b) for(int i = a; i >= b; i--)
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vll vector<ll>
#define vpi vector<pii>
#define vpl vector<pll>
#define umap unordered_map
#define uset unordered_set
#define endl '\n' // Avoids flushing output every time

// Constants
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;

// Debugging helper
#define debug(x) cerr << #x << " = " << x << endl;

// GCD & LCM
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

// Fast Exponentiation (Modular)
ll power(ll a, ll b, ll m = MOD) {
    ll res = 1;
    while (b) {
        if (b & 1) res = (res * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}

// Prime Check (Efficient)
bool isPrime(ll n) {
    if (n < 2) return false;
    for (ll i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

// Binary Search
int binSearch(vi &arr, int x) {
    int l = 0, r = sz(arr) - 1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x) return mid;
        else if (arr[mid] < x) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}

// Prefix Sum Calculation
vector<ll> prefixSum(const vll &arr) {
    vll prefix(sz(arr), 0);
    prefix[0] = arr[0];
    for (int i = 1; i < sz(arr); i++)
        prefix[i] = prefix[i - 1] + arr[i];
    return prefix;
}

// Graph Traversal - BFS & DFS
void bfs(int start, vector<vi> &adj) {
    queue<int> q;
    vector<bool> visited(sz(adj), false);
    q.push(start);
    visited[start] = true;
    
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";
        
        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                q.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }
}

void dfs(int node, vector<vi> &adj, vector<bool> &visited) {
    visited[node] = true;
    cout << node << " ";
    
    for (int neighbor : adj[node]) {
        if (!visited[neighbor])
            dfs(neighbor, adj, visited);
    }
}

// Disjoint Set Union (DSU) - Union-Find
struct DSU {
    vi parent, rank;
    DSU(int n) {
        parent.resize(n);
        rank.resize(n, 1);
        for (int i = 0; i < n; i++) parent[i] = i;
    }

    int find(int x) {
        if (parent[x] != x) parent[x] = find(parent[x]); // Path compression
        return parent[x];
    }

    void unite(int x, int y) {
        int rootX = find(x), rootY = find(y);
        if (rootX != rootY) {
            if (rank[rootX] > rank[rootY]) swap(rootX, rootY);
            parent[rootX] = rootY;
            if (rank[rootX] == rank[rootY]) rank[rootY]++;
        }
    }
};

// Sorting Comparators
bool comp1(pii &a, pii &b) { return a.first < b.first; } // Ascending order
bool comp2(pii &a, pii &b) { return a.first > b.first; } // Descending order

// Bit Manipulation Tricks
bool isPowerOfTwo(int x) { return (x && !(x & (x - 1))); }
int countSetBits(int x) { return __builtin_popcount(x); }
int countLeadingZeros(int x) { return __builtin_clz(x); }
int countTrailingZeros(int x) { return __builtin_ctz(x); }

// Main Function
int main() {
    fast_io; // Enable fast input/output
    
    int t;
    cin >> t; // Read number of test cases
    while (t--) {
       int n; cin >> n;
       cout << n*n*n << endl;
    }

    return 0;
}
