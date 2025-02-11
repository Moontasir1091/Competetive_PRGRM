#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> p(n);  
int flag = 0;
    for (int i = 0; i < n; ++i) {
        cin >> p[i].first >> p[i].second;
          if(p[i].second > p[i].first)flag = 1;
    }
    if(flag == 1){
        cout << "Happy Alex" << endl;
    }
    else{
        cout << "Poor Alex" << endl;
    }

    

    return 0;
}
