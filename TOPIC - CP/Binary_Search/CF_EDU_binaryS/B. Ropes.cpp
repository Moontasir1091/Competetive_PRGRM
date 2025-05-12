#include<bits/stdc++.h>
using namespace std;

int n, k;
vector<int>a;

bool good(double x){
    int total_rope = 0;
    for(int i = 0; i<n;++i){
        total_rope += floor(a[i] / x);
    }
    return total_rope >= k; // total number of ropes

}



int main(){
    cin >> n >> k;
    a.resize(n);

    for(int i= 0; i<n;++i){
        cin >> a[i];
    }
    double l = 0; // good numbers;
    double r = 1e8; // bad numbers;

    for(int t = 0; t < 100 ; ++t){
        double m = (l + r) / 2;
        if(good(m)){
            l = m;
        }
        else{
            r = m;
        }
    }
     cout  << fixed << setprecision(20) << l << endl;
}