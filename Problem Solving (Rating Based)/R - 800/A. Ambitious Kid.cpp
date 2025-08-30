#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int>v(n);
    for(int i =0 ; i < n;++i){
        cin >> v[i];
        if(v[i] < 0){
            v[i] = v[i] * (-1);
        }
    }
    int min = *min_element(v.begin(), v.end());
    cout << min << endl;

}