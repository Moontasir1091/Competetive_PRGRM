#include <bits/stdc++.h>
using namespace std;

vector<int> PSE(vector<int>& v) {
    vector<int> pse(v.size());
    stack<int> st; // Stack to store indices

    for (int i = 0; i < v.size(); ++i) {
        // Pop elements from stack while they are >= current element
        while (!st.empty() && v[st.top()] >= v[i]) {
            st.pop();
        }
        
        // If stack is not empty, top of stack is the nearest smaller element's index
        pse[i] = st.empty() ? 0 : st.top() + 1; // Convert 0-based index to 1-based

        // Push current index onto stack

        
        st.push(i);
    }

    return pse;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    vector<int> pse = PSE(v);

    for (int i = 0; i < n; ++i) {
        cout << pse[i] << " ";
    }
    cout << endl;

    return 0;
}
