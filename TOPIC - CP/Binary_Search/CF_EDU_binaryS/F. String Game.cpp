#include <bits/stdc++.h>
using namespace std;

// Check if p can be formed after deleting first `mid` characters from `t`
bool can_delete(string t, string p, vector<int>& a, int mid) {
    int n = t.size();
    vector<bool> removed(n, false);

    for (int i = 0; i < mid; ++i) {
        removed[a[i] - 1] = true;
    }

    int j = 0;
    for (int i = 0; i < n; ++i) {
        if (removed[i]) continue;
        if (j < p.size() && t[i] == p[j]) {
            j++;
            if (j == p.size()) return true;
        }
    }

    return j == p.size();
}

// Binary Search to find the max deletable characters
int binary_Search_Max_Delete(string t, string p, vector<int>& a) {
    int l = 0, r = t.size(), ans = 0;

    while (l <= r) {
        int mid = (l + r) / 2;
        if (can_delete(t, p, a, mid)) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    return ans;
}

int main() {
    string t, p;
    cin >> t >> p;
    int n = t.size();
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    cout << binary_Search_Max_Delete(t, p, a) << '\n';
}
