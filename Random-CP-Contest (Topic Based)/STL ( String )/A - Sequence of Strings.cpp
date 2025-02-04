#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<string> vec;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        vec.push_back(s);
    }

    reverse(vec.begin(), vec.end());  

   
    for (const auto& st : vec) {
        cout << st << "\n"; 
    }
}
